#include <stdio.h>
#include <stdlib.h>
#include "es5D.h"



/*
gcc -g3 -std=gnu89 -fuse-ld=gold -fsanitize=address -fsanitize=undefined -pedantic-errors -Wall -Wextra -o es5D es5D.c main5D.c && ./es5D
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
  append(&l1,8);
  append(&l1,5);
  append(&l1,3);
  append(&l1,9);




  append(&l2,1);
  append(&l2,3);


  print_list(l1);
  print_list(l2);

  printf("%d",contiene_in_ordine(l1,l2));

  destroy_main(&l1);
  destroy_main(&l2);

  return 0;
}

