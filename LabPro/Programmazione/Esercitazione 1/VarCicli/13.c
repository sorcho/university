#include <stdio.h>

int main(){
	int n, contAlti = 0, contBassi = 0;
	float media = 0, altezza;

	printf("Inserisci n: ");
	scanf("%d", &n);

	for(int i = 0; i < n; i++){
		printf("Inserisci altezza: ");
		scanf("%f", &altezza);

		media += altezza;

		if(altezza > 1.80)
			contAlti++;
		else if(altezza < 1.65)
			contBassi++;
	}

	media /= n;

	printf("Persone più alte di 1.80m: %d\nPersone più basse di 1.65m: %d\nAltezza media: %.2f\n", contAlti, contBassi, media);

	return 0;
}
