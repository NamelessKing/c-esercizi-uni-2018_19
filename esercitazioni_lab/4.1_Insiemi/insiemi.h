#define MAX_ELEMENTI 1000
typedef int insieme[MAX_ELEMENTI + 1];


void inizializza_insieme(insieme A);


int inserisci_elemento_insieme(insieme A,int x);


int elimina_elemento_insieme(insieme A,int x);


int insieme_contiene(insieme A,int x);


int intersezione_insiemi(insieme A,insieme B,insieme risultato);


int unione(insieme A,insieme B,insieme risultato);


int differenza_insiemi(insieme A,insieme B,insieme risultato);




