struct cella {
   int valore;
   struct cella *next;
};
typedef struct cella *tlista;

void inserisci(tlista *lista, int valore);
