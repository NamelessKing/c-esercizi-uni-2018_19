struct cella {
   int valore;
   struct cella *next;
};
typedef struct cella *tlista;

void inserisci(tlista *lista, int valore);
void destroy( tlista * l);
int inserisci2(tlista *lista, int valore);
