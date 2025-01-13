#!/bin/bash

# Scrivere uno script BASH "visita.sh" che visita tutti i file della directory corrente. Per ogni file determina
# il suo tipo. Se il file è leggibile è un file txt doc o un sh o un c, visita.sh chiede all’utente se si vuole vedere
# il suo contenuto mostrando solo le ultime 3 righe, mentre se il file è una sottodirectory, visita.sh chiede se
# si vuole visitare anche la sottodirectory. Per ogni file incontrato, visita.sh chiede se lo si vuole rimuovere
# prima di passare a gestire il prossimo file nella directory corrente.

esplora_directory () {
	for file in *; do
		if [[ -f $file ]]; then
			stampa_file "$file"
		elif [[ -d $file ]]; then
			entra_in_directory "$file"
		fi
	done
}

elimina_file() {
	elem=$1
	
	read -p "vuoi eliminare il file? " risp
	if [[ $risp == "si" ]]; then
		rm "$elem"
	fi
}

stampa_file () {
	elem=$1

	read -p "vuoi leggere il file? " risp
	if [[ $risp == "si" ]]; then
		tail -n 3 "$elem"
		elimina_file "$elem"
	fi
}

entra_in_directory () {
	directory=$1

	read -p "vuoi visitare la cartella? " risp
	if [[ $risp == "si" ]]; then
		pushd "$directory" > /dev/null
		esplora_directory
		popd > /dev/null
	fi
}

esplora_directory