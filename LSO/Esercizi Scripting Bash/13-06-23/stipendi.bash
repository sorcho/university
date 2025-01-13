#!/bin/bash

# Dato un file di testo "paghe.txt" con almeno 6 righe di testo, scrivere uno script "stipendi" che inserisca
# il titolo "Sig.re" se si tratta di un uomo, e il titolo "Sig.ra" se si tratta di una donna, prima del nome.
# Calcolare e mostrare a video lo stipendio minimo, massimo e medio del personale, e aggiungere un bonus
# di x euro (dove x viene inserito dall’utente) allo stipendio minimo. Il file dovrà contenere i seguenti campi:
# nome, cognome, genere, stipendio, anno di assunzione.

nomi=()
cognomi=()
sesso=()
stipendi=()
anni=()

init_array() {
	while read -r nome cognome sesso_val stipendio anno; do
		nomi+=("$nome")
		cognomi+=("$cognome")
		sesso+=("$sesso_val")
		stipendi+=("$stipendio")
		anni+=("$anno")
	done < paghe.txt
}

aggiungi_prefisso() {
	for i in "${!nomi[@]}"; do
		if [[ "${sesso[$i]}" == "m" ]]; then
			nomi[$i]="Sig. ${nomi[$i]}"
		else
			nomi[$i]="Sig.ra ${nomi[$i]}"
		fi
	done
}

calcola_min_max_med() {
	n_dipendenti=${#nomi[@]}
	min=${stipendi[0]}
	max=${stipendi[0]}
	med=0
	
	for i in "${!nomi[@]}"; do
		if [[ $min -gt ${stipendi[$i]} ]]; then
			min=${stipendi[$i]}
		elif [[ $max -lt ${stipendi[$i]} ]]; then
			max=${stipendi[$i]}
		fi
		
		med=$((med + ${stipendi[$i]}))
	done
	
	min=$(applica_bonus "$min")
	
	med=$((med / n_dipendenti))
	
	echo -e "Minimo: $min\nMassimo: $max\nMedia: $med\n"
}

applica_bonus() {
	min=$1

	read -p "Inserire importo del bonus: " bonus
	
	min=$((min + bonus))
	
	echo "$min"
}

stampa() {
	for i in "${!nomi[@]}"; do
		echo -e "Nome: ${nomi[$i]}\nCognome: ${cognomi[$i]}\nSesso: ${sesso[$i]}\nStipendio: ${stipendi[$i]}\nAnno: ${anni[$i]}\n"
	done
}

init_array
aggiungi_prefisso
stampa
calcola_min_max_med