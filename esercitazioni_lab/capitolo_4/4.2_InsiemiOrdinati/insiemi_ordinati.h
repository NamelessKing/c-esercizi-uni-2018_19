#define MAX_ELEMENTI 1000
typedef int insieme_ordinato[MAX_ELEMENTI + 1];


void inizializza_insieme_ordinato(insieme_ordinato A);


int inserisci_elemento_insieme_ordinato(insieme_ordinato A,int x);


int elimina_elemento_insieme_ordinato(insieme_ordinato A,int x);


int insieme_ordinato_contiene(insieme_ordinato A,int x);


void intersezione_insiemi_ordinati(insieme_ordinato A,insieme_ordinato B,insieme_ordinato risultato);


void unione_insiemi_ordinati(insieme_ordinato A,insieme_ordinato B,insieme_ordinato risultato);


void differenza_insiemi_ordinati(insieme_ordinato A,insieme_ordinato B,insieme_ordinato risultato);

void stampa_insieme(insieme_ordinato A);






