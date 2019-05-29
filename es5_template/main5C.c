#include <stdio.h>
#include <stdlib.h>
#include "es5C.h"


/*
gcc -g3 -std=gnu89 -fuse-ld=gold -fsanitize=address -fsanitize=undefined -pedantic-errors -Wall -Wextra -o es5C es5C.c main5C.c && ./es5C
*/



void print_list ( tlista l) {
  if (l != NULL ) {
    printf ("[%d]-> " , l -> valore );
    print_list (l -> next );
  }else
    printf ("[ NULL ]\n");
}

void destroy_main(tlista *pl){
    tlista l;
    while(*pl){
        l=(*pl)->next;
        free(*pl);
        *pl=l;
    }
}
int append(tlista *pl, int elem){
    if(*pl==NULL){
        tlista supp;
        supp = (tlista)malloc(sizeof(struct cella));
        supp->valore=elem;
        supp->next=NULL;
        *pl=supp;
    }else{
        return append(&((*pl)->next), elem);
    }
    return 0;
}


int main() {

  tlista l1 = NULL,l2 = NULL;

  append(&l1,1);
  append(&l1,5);




  append(&l2,5);


  print_list(l1);
  print_list(l2);

  printf("%d",sottosequenza(l1,l2));

  destroy_main(&l1);
  destroy_main(&l2);

  return 0;
}
