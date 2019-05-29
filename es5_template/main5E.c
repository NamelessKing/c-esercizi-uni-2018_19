#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "es5E.h"


void print_stack ( tstack s) {
  int i ;
  while(s != NULL){
    printf("[ ");
    for(i = s->numero_valori;i > 0; i--){
      printf("%d ",s->valori[i - 1]);
    }
    printf("]--> ");
    s = s->next;
  }
  printf("\n");
}

void destroy_main(tstack *pl){
    tstack l;
    while(*pl){
        l=(*pl)->next;
        /*free(*pl->valori);*/
        free(*pl);
        *pl=l;
    }
}


int main() {

  tstack s = getempty();
  int v;


  push(&s,1);
  push(&s,2);
  push(&s,3);

  push(&s,4);
  push(&s,5);

  print_stack(s);

  pop(&s,&v);
  printf("%d\n",v);
  print_stack(s);

  pop(&s,&v);
  printf("%d\n",v);
  print_stack(s);

  pop(&s,&v);
  printf("%d\n",v);
  print_stack(s);

  pop(&s,&v);
  printf("%d\n",v);
  print_stack(s);

  pop(&s,&v);
  printf("%d\n",v);
  print_stack(s);

  pop(&s,&v);
  printf("%d\n",v);
  print_stack(s);

  if(s== NULL){
    printf("s null");
  }


  destroy_main(&s);

  return 0;
}
