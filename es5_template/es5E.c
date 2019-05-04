#include "es5E.h"
#include <stdlib.h>


/* ritorna uno stack vuoto */
tstack getempty() {
  return NULL;
}

/*  ritorna 1 se lo stack s è vuoto, 0 altrimenti */
int isempty(tstack s){
  return 1;
}

/* inserisce l'intero v nello stack s. Ritorna 1 in caso di successo, 0 altrimenti (errore di allocazione). */
int push(tstack *s, int v) {
  return 0;
}

/* estrae un elemento dallo stack s (secondo la disciplina LIFO). Ritorna in caso di successo (stack non vuoto), 0 altrimenti (stack vuoto). */
int pop(tstack *s, int *v) {
  return 0;
}
