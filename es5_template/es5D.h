struct cella {
    int valore;
    struct cella *next;
};
typedef struct cella *tlista;

int  contiene_in_ordine(tlista lista1, tlista lista2);
