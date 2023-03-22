#include <stdio.h>

int main(){
	int voto;

	printf("Inserisci il voto dell'esame: ");
	scanf("%d", &voto);

	(voto >= 18) ? printf("PROMOSSO\n") : printf("BOCCIATO\n");

	return 0;
}
