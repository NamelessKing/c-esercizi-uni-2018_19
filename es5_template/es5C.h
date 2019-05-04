struct cella {
   int valore;
   struct cella *next;
};
typedef struct cella *tlista;

int  sottosequenza(tlista lista1, tlista lista2);
