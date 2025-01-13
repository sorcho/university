#!/bin/bash

echo "Inserisci un numero"
read numero

if [[ $numero -gt 0 ]];
then
	echo "Il numero e' positivo"
	
	while [[ $numero -ge 0 ]]; do
		echo "$numero"
		(( numero -= 1 ))
	done
elif [[ $numero -lt 0 ]];
then
	echo "Il numero e' negativo"
	
	while [[ $numero -le 0 ]]; do
		echo "$numero"
		(( numero += 1 ))
	done
else
	echo "Il numero e' 0"
fi