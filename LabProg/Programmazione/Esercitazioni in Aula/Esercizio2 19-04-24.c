// dato un array di struct (id_esame int, esame stringa, voto int), stampare il nome dell'esame col voto maggiore e quello col voto minore

#include <stdio.h>
#define MAX 20

struct dati{
	int id_esame;
	char esame[MAX];
	int voto;
}uni[MAX];

int main(){
	int n;
	
	do{
		printf("Inserire il numero di esami da salvare in memoria: ");
		scanf("%d", &n);
	}while(n > MAX);
	
	int idmin, idmax, min, max;
	
	for(int i = 0; i < n; i++){
		printf("Inserisci l'id del %d° esame: ", i+1);
		scanf("%d", &uni[i].id_esame);
		printf("Inserisci il nome del %d° esame: ", i+1);
		scanf("%s", uni[i].esame);
		printf("Inserisci il voto del %d° esame: ", i+1);
		scanf("%d", &uni[i].voto);
		
		if(i == 0){
			min = uni[i].voto;
			max = uni[i].voto;
			idmin = i;
			idmax = i;
		}
		
		if(uni[i].voto > max){
			max = uni[i].voto;
			idmax = i;
		}
		
		if(uni[i].voto < min){
			min = uni[i].voto;
			idmin = i;
		}
	}
	
	printf("Il nome dell'esame col voto minore è: %s\nIl nome dell'esame col voto maggiore è: %s\n", uni[idmin].esame, uni[idmax].esame);

	return 0;
}
