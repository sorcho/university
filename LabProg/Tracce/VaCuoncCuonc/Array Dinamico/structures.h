typedef struct datiV{
	char targa[20];
	float vel;
	float limite;
} veicolo;

typedef struct datiR{
	veicolo *deposito;
	int first_free;
} report;
