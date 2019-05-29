#include <stdio.h>
#include <stdlib.h>
#include "es5A.h"

/*
gcc -g3 -std=gnu89 -fuse-ld=gold -fsanitize=address -fsanitize=undefined -pedantic-errors -Wall -Wextra -o es5A es5A.c main5A.c && ./es5A
*/

void print_list ( tlista l) {
  if (l != NULL ) {
    printf ("[%d]-> " , l -> valore );
    print_list (l -> next );
  }else
    printf ("[ NULL ]");
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

  tlista l = NULL;
  inserisci(&l,2);
  inserisci(&l,1);



  print_list(l);
 destroy_main(&l);





  return 0;
}
