struct cella {
   int valore;
   struct cella *next;
};
typedef struct cella *tlista;

tlista intersezione(tlista lista1, tlista lista2);
void inserisci(tlista *lista, int valore);
