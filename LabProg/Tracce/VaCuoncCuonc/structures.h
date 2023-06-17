typedef struct datiV{
	char targa[11]; // max 10 caratteri + terminale
	float vel;
	float limite;
}veicolo;

typedef struct datiR{
	veicolo deposito;

	struct datiR *prossimo;
}report;
