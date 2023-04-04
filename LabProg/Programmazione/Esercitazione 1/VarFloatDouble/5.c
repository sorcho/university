#include <stdio.h>

int main(){
	int v1, v2, v3, v4;
	float p1, p2, p3, p4, mediaPesata;

	printf("Inserisci il 1° voto: ");
	scanf("%d", &v1);
	printf("Inserisci il 2° voto: ");
	scanf("%d", &v2);
	printf("Inserisci il 3° voto: ");
	scanf("%d", &v3);
	printf("Inserisci il 4° voto: ");
	scanf("%d", &v4);

	printf("Inserisci il 1° peso: ");
	scanf("%f", &p1);
	printf("Inserisci il 1° peso: ");
	scanf("%f", &p2);
	printf("Inserisci il 1° peso: ");
	scanf("%f", &p3);
	printf("Inserisci il 1° peso: ");
	scanf("%f", &p4);

	mediaPesata = ((v1 * p1) + (v2 * p2) + (v3 * p3) + (v4 * p4)) / (p1 + p2 + p3 + p4);
	printf("La media pesata è: %.2f\n", mediaPesata);

	return 0;
}
