(*Definire un tipo per le triple che hanno un intero come primo e
terzo componente, e qualsiasi tipo al centro*)

datatype 'a tripla = triplo of int * 'a * int;

(*Per un programma di gestione di un magazzino, definire un tipo
di record chiamato prodotto che contenga un valore arbitrario,
accompagnato da un prezzo e da una numerosità intera*)

datatype 'a prodotto = prod of {valore:'a, prezzo:real, numero:int};

(*Definire un datatype per un albero binario non vuoto in cui i
nodi interni contengono valori di un certo tipo, e le foglie
contengono un valore di un altro tipo*)

datatype ('a,'b) fullBT = fbtInnerNode of 'a * ('a,'b) fullBT * ('a,'b) fullBT | fbtLeafNode of 'b;

(*Ripetere l’esercizio precedente, ammettendo anche alberi vuoti*)

datatype ('a,'b) BT = vuoto | fbtInnerNode of 'a * ('a,'b) BT * ('a,'b) BT | fbtLeafNode of 'b;

(*Definire un datatype per un albero binario in cui i nodi di profondità pari contengono valori di un certo tipo, e i nodi di profondità dispari valori di un altro tipo (assumendo che la profondità della radice sia 1)*)

datatype ('a, 'b) nododispari = nodod of 'a * ('a, 'b) nodopari * ('a, 'b) nodopari and
('a, 'b) nodopari = nodop of 'b * ('a, 'b) nododispari * ('a, 'b) nododispari;