-- Esercizio 2
SELECT l.titolo, count(*) as maxprestito
FROM libro l
INNER JOIN esemplare e ON e.isbn = l.isbn
INNER JOIN prestito p ON p.codicebarre = e.codicebarre
WHERE p.dataE = '%2022'
ORDER BY maxprestito DESC
LIMIT 1;

-- Esercizio 3.1
CREATE OR REPLACE ASSERTION primo_vincolo
CHECK	(
		SELECT p.maxprestito
		FROM profilo p
		INNER JOIN utente u ON u.codprofilo = p.codprofilo
	) >=
	(
		SELECT count(*)
		FROM prestito pr
		INNER JOIN utente u2 ON u2.codprofilo = pr.utente
	)

-- Esercizio 3.2
CREATE OR REPLACE ASSERTION secondo_vincolo
CHECK prestito.sollecito IS NOT NULL AND prestito.dataR > prestito.dataS

-- Esercizio 3.3
CREATE OR REPLACE ASSERTION terzo_vincolo
CHECK	(
		SELECT count(*)
		FROM utente u
		INNER JOIN profilo p ON u.codprofilo = p.codprofilo
	) <= 1
	
-- Esercizio 5.1
CREATE TRIGGER t1
BEFORE UPDATE ON prestito
EXECUTE FUNCTION t1_function();

CREATE FUNCTION t1_function() RETURNS TRIGGER
LANGUAGE plpgsql AS
$$
BEGIN
	IF NEW.sollecito IS NULL THEN
		RETURN OLD;
	ELSE
		DELETE FROM prenotazione p
		WHERE NEW.utente = p.utente;
		
		RETURN NEW;
	END IF;
END;
$$

-- Esercizio 5.2
CREATE TRIGGER t2
BEFORE INSERT ON prestito
EXECUTE FUNCTION t2_function();

CREATE FUNCTION t2_function() RETURNS TRIGGER
LANGUAGE plpgsql AS
$$
DECLARE
libro_isbn esemplare.isbn%TYPE = 	SELECT e.isbn
					FROM esemplare e
					WHERE e.codicebarre = NEW.codicebarre;
BEGIN
	IF libro_isbn = prenotazione.isbn AND NEW.utente = prenotazione.utente THEN
		DELETE FROM prenotazione p
		WHERE p.utente = NEW.utente;
	END IF;
	
	RETURN NEW;
END;
$$

-- Esercizio 6
CREATE PROCEDURE procedura()
LANGUAGE plpgsql AS
$$
DECLARE
BEGIN
END;
$$

-- Esercizio 7
