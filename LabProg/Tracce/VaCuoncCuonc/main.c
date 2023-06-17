#include "header.h"

int main(){
	report *r = NULL; // puntatore di testa

	printf("Carico i veicoli nella lista puntata.\n");
	load_vehicles_from_file(&r, "info.txt");

	printf("Rilevo i crimini.\n");
	write_crimes_on_file(&r, "crimini.txt");

	return 0;
}
