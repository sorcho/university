#include "header.h"

int main(){
	report r;

	init_stack(&r);

	load_vehicles_from_file(&r, "info.txt");
	write_crimes_on_file(&r, "crimini.txt");

	return 0;
}
