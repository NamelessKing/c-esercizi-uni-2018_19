#define MAX_ELEMENTI 1000
typedef int insieme[MAX_ELEMENTI + 1];


void inizializza_insieme(insieme A);


int inserisci_elemento_insieme(insieme A,int x);


int elimina_elemento_insieme(insieme A,int x);


int insieme_contiene(insieme A,int x);


void intersezione_insiemi(insieme A,insieme B,insieme risultato);


void unione_insiemi(insieme A,insieme B,insieme risultato);


void differenza_insiemi(insieme A,insieme B,insieme risultato);


void ordina_insieme(insieme A);
