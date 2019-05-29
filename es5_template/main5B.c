#include <stdio.h>
#include <stdlib.h>
#include "es5B.h"


/*
gcc -g3 -std=gnu89 -fuse-ld=gold -fsanitize=address -fsanitize=undefined -pedantic-errors -Wall -Wextra -o es5B es5B.c main5B.c && ./es5B
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


int main() {


  tlista l1 = NULL,l2 = NULL,out = NULL;
  inserisci(&l1,1);
  inserisci(&l1,2);
  inserisci(&l1,3);
  inserisci(&l1,3);
  inserisci(&l1,4);
  inserisci(&l1,7);
  inserisci(&l1,7);


  inserisci(&l2,1);
  inserisci(&l2,1);
  inserisci(&l2,1);
  inserisci(&l2,1);
  inserisci(&l2,2);
  inserisci(&l2,3);


  out = intersezione(l1,l2);



  print_list(out);
  destroy_main(&l1);
  destroy_main(&l2);
  destroy_main(&out);

  return 0;
}
