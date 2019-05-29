#include <stdlib.h>
#include "es5E.h"


/* ritorna uno stack vuoto */
tstack getempty() {
  return NULL;
}

/*  ritorna 1 se lo stack s è vuoto, 0 altrimenti */
int isempty(tstack s){
  return !s;
}

/* inserisce l'intero v nello stack s. Ritorna 1 in caso di successo, 0 altrimenti (errore di allocazione). */


int push(tstack *s, int v){

  tstack node = getempty();

  if(!*s){

    node = (tstack)malloc(sizeof(struct cella));
    if(node == NULL){
      return 0;
    }else{

      node->numero_valori = 0;
      node->valori[node->numero_valori] = v;
      node->numero_valori = node->numero_valori + 1;
      node->next = NULL;
      *s = node;
      return 1;
    }

  }else{

    if((*s)->numero_valori == VALORI_PER_CELLA){

      node = (tstack)malloc(sizeof(struct cella));
      if(node == NULL){
        return 0;
      }else{
        node->numero_valori = 0;
        node->valori[node->numero_valori] = v;
        node->numero_valori = node->numero_valori + 1;
        node->next = *s;
        *s = node;
      }
    }else{
      (*s)->valori[(*s)->numero_valori] = v;
      (*s)->numero_valori += 1;
    }
    return 1;
  }
}



/* estrae un elemento dallo stack s (secondo la disciplina LIFO). Ritorna in caso di successo (stack non vuoto), 0 altrimenti (stack vuoto). */
int pop(tstack *s, int *v) {
  tstack temp;
  if(!*s){
    return 0;
  }else{

    if((*s)->numero_valori == 1){
      temp = *s;
      *s = (*s)->next;
      *v = temp->valori[temp->numero_valori - 1];
      free(temp);
    }else{
      (*s)->numero_valori -= 1;
      *v = (*s)->valori[(*s)->numero_valori];
    }
    return 1;
  }
}
