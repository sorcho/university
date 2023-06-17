#include "header.h"

void load_vehicles_from_file(report **pp_head, char nomefile[]){
	FILE *f = fopen(nomefile, "r");

	if (f == NULL){
		printf("Errore nell'apertura del file.\n");
		return;
	}

	veicolo v;

	while(fscanf(f, "%s %f %f", v.targa, &v.vel, &v.limite) == 3){
		push(pp_head, v);
	}

	fclose(f);
}

void push(report **pp_head, veicolo v){ // caricamento della pila, quindi LIFO
	report *nuovo = malloc(sizeof(report));

	nuovo -> deposito = v; // inserisco i dati del file nel nodo
	nuovo -> prossimo = NULL; // inizializzo il puntatore prossimo a NULL

	if(*pp_head != NULL)
		nuovo -> prossimo = *pp_head;

	*pp_head = nuovo;
}

int pop (report **pp_head, veicolo *v){
	if(*pp_head == NULL)
		return 1; // lista vuota

	report *punt = *pp_head;
	*v = punt -> deposito;

	*pp_head = punt -> prossimo;
	punt -> prossimo = NULL;

	return 0;
}

int is_crime(veicolo v){ // restituisce 1 se è sanzionabile, 0 altrimenti
	if(v.vel > v.limite*0.05)
		return 1;

	return 0;
}

void write_crimes_on_file(report **pp_head, char nomefile[]){
	FILE *f = fopen(nomefile, "w");
	veicolo v;
	float soglia;

	if(f == NULL){
		printf("Errore nell'apertura del file.\n");
		return;
	}

	while(pop(pp_head, &v) == 0){
		if(is_crime(v) == 1){
			soglia = v.vel - v.limite;

			if(soglia > 0 && soglia <= 10)
				fprintf(f, "%s %.1f %.1f\n", v.targa, soglia, 173.0);
			else if(soglia > 10 && soglia <= 40)
				fprintf(f, "%s %.1f %.1f\n", v.targa, soglia, 695.0);
			else if(soglia > 40 && soglia <= 60)
				fprintf(f, "%s %.1f %.1f\n", v.targa, soglia, 2170.0);
			else if(soglia > 60)
				fprintf(f, "%s %.1f %.1f\n", v.targa, soglia, 3382.0);
		}
	}

	fclose(f);
}



