#!/bin/bash

# Si realizzi uno script di shell BASH “menu”, che accetta come argomento un file “listino.txt” strutturato
# nel seguente modo:
# codice quantità costo
# 01953 2 15
# 07934 1 20
# 084Gd 10 30
# 9038H 1 5
# e che implementi le seguenti funzioni accessibili da un menu:
# (a) Cerca- Chiede all’utente una stringa da ricercare all’intero del listino ed effettua la ricerca
# (b) Aggiungi- Chiede all’utente il codice del prodotto da aggiungere (primo campo del listino) e la
# quantità di articoli desiderati, verifica le scelte effettuate e le memorizza in un file carrello
# (c) Elimina- un prodotto dal carrello

array_codice=()
array_quantita=()
array_costo=()

init_array () {
	while read -r codice quantita costo; do
		if [[ "$codice" == "codice" ]]; then
			continue
		fi
		
		array_codice+=("$codice")
		array_quantita+=("$quantita")
		array_costo+=("$costo")
	done < listino.txt
}

stampa_array () {
	echo "Codici: ${array_codice[@]}"
	echo "Quantita: ${array_quantita[@]}"
	echo "Costo: ${array_costo[@]}"
}

cerca_stringa () {
	ricerca=$1
	
	for i in "${!array_codice[@]}"; do
		if [[ $ricerca == ${array_codice[$i]} ]]; then
			echo "$i"
			return 0
		fi
	done

	return 1
}

stampa_risultato () {
	indice=$1
	
	echo "Codice: ${array_codice[$indice]}"
	echo "Quantita: ${array_quantita[$indice]}"
	echo "Costo: ${array_costo[$indice]}"
}

aggiungi_al_carrello () {
	read -p "Inserisci la quantita: " quant
	
	if [[ $quant -gt ${array_quantita[$1]} ]]; then
		return 1
	else
		echo "${array_codice[$1]} $quant" >> carrello.txt
		echo "Elemento aggiunto al carrello."
	fi
}

elimina_dal_carrello () {
	array_righe_carrello=()
	
	while read -r codice quantita; do
		if [[ "$codice" == "codice" ]]; then
			continue
		fi
		
		array_righe_carrello+=("$codice")
	done < carrello.txt
	
	echo "Righe disponibili nel carrello:"
    for i in "${!array_righe_carrello[@]}"; do
        echo "$i: ${array_righe_carrello[$i]}"
    done
	
	read -p "Inserisci numero di riga da eliminare: " riga
	
	if [[ $riga -ge ${#array_righe_carrello[@]} ]]; then
		return 1
	fi
	
	sed -i "$((riga + 2))d" carrello.txt
}

init_array
stampa_array

echo -e "a) Cerca\nb) Aggiungi\nc) Elimina\n"
read -p "Inserisci la tua scelta: " scelta

case $scelta in
	a)
	echo -e "\nHai scelto 'Cerca'"
	read -p "Codice da ricercare: " ricerca
	indice=$(cerca_stringa "$ricerca")
	if [[ "$indice" != "" ]]; then  # Controlla se indice è non vuoto
		stampa_risultato "$indice"
	fi
	;;
	b)
	echo -e "\nHai scelto 'Aggiungi'"
	read -p "Codice da aggiungere al carrello: " ricerca
	indice=$(cerca_stringa "$ricerca")
	if [[ "$indice" != "" ]]; then  # Controlla se indice è non vuoto
		aggiungi_al_carrello "$indice"
	else
		echo "Errore: il codice non esiste, non posso aggiungerlo al carrello."
	fi
	;;
	c)
	echo -e "\nHai scelto 'Elimina'"
	elimina_dal_carrello
	;;
	*)
	echo -e "\nHai sbagliato"
	;;
esac

