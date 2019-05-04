#define VALORI_PER_CELLA 10

struct cella {
   int valori[VALORI_PER_CELLA];
   int numero_valori;
   struct cella *next;
};
typedef struct cella *tstack;

/* ritorna uno stack vuoto */
tstack getempty();

/*  ritorna 1 se lo stack s è vuoto, 0 altrimenti */
int isempty(tstack s);

/* inserisce l'intero v nello stack s. Ritorna 1 in caso di successo, 0 altrimenti (errore di allocazione). */
int push(tstack *s, int v);

/* estrae un elemento dallo stack s (secondo la disciplina LIFO). Ritorna in caso di successo (stack non vuoto), 0 altrimenti (stack vuoto). */
int pop(tstack *s, int *v);
