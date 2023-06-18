#include "header.h"

void init_stack(report *p_head){
	p_head -> deposito = (veicolo *)malloc(MAX * sizeof(veicolo));
	p_head -> first_free = 0;
}

void load_vehicles_from_file(report *p_head, char nomefile[]){
	FILE *f = fopen(nomefile, "r");

	if(f == NULL){
		printf("Errore nell'apertura del file.\n");
		return;
	}

	veicolo v;

	while(fscanf(f, "%s %f %f", v.targa, &v.vel, &v.limite) == 3)
		push(p_head, v);

	fclose(f);
}

void push(report *p_head, veicolo v){
	if(p_head -> first_free > MAX){
		printf("La lista è piena.\n");
		return;
	}

	p_head -> deposito[p_head -> first_free] = v;
	p_head -> first_free += 1;
}

int is_crime(veicolo v){ // 1 = sanzione, 0 = safe
	if(v.vel > v.limite * 0.05)
		return 1;

	return 0;
}

int pop(report *p_head, veicolo *v){
	if(p_head -> first_free <= 0)
		return 0;

	*v = p_head -> deposito[p_head -> first_free - 1];

	p_head -> first_free -= 1;

	return 1;
}

void write_crimes_on_file(report *p_head, char nomefile[]){
	FILE *f = fopen(nomefile, "w");

	if(f == NULL){
		printf("Errore nell'apertura delf file.\n");
		return;
	}

	veicolo app;
	float soglia;

	while(pop(p_head, &app) == 1){
		if(is_crime(app) == 1){
			soglia = app.vel - app.limite;

			if(soglia > 0 && soglia <= 10)
				fprintf(f, "%s %.1f %.1f\n", app.targa, soglia, 173.0);
			else if(soglia > 10 && soglia <= 40)
				fprintf(f, "%s %.1f %.1f\n", app.targa, soglia, 695.0);
			else if(soglia > 40 && soglia <= 60)
				fprintf(f, "%s %.1f %.1f\n", app.targa, soglia, 2170.0);
			else if(soglia > 60)
				fprintf(f, "%s %.1f %.1f\n", app.targa, soglia, 3382.0);
		}
	}

	fclose(f);
}




