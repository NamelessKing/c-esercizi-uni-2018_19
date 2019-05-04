#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "es4C.h"

/*
COMPILE WITH:
gcc -g3 -std=gnu89 -fuse-ld=gold -fsanitize=address -fsanitize=undefined -pedantic-errors -Wall -Wextra -o es4C es4C.c main4C.c && ./es4C
*/


int main(){

  char filename[] = "es4C.txt";

  FILE *fp = fopen(filename, "w");
  fputs("\n\n\n\n\nc\n", fp);
  fclose(fp);



  lista_parole("es4C.txt","es4C_ris.txt");

  return 0;
}



/*struct node{
    char *elem;
    int counter;
    struct node * next;
};

typedef struct node *list;

void printlist1(list l){
    while(l!=NULL){
        printf("%s %d\n", l->elem,l->counter);
        l=l->next;
    }
}

void destroy1(list *pl){
    list l;
    while(*pl){
        l=(*pl)->next;
        free((*pl)->elem);
        free(*pl);
        *pl=l;
    }
}

int insert_tail1(list *pl,char *elem){
  if(*pl == NULL){
    list sup;
    sup=(list)malloc(sizeof(struct node));
    sup->elem = (char *)malloc((strlen(elem)+1) * sizeof(char));
    strcpy(sup->elem, elem);
    sup->counter = 1;
    sup->next = NULL;
    *pl = sup;
    return 1;
  }else if(strcmp(((*pl)->elem),elem) == 0){
    list sup = *pl;
    sup->counter += 1;
    *pl = sup;
    return 0;
  }else{
    return insert_tail1((&(*pl)->next),elem);
  }
}





int main() {

  list p;
  p = NULL;

  insert_tail1(&p,"ciao\0");
  insert_tail1(&p,"marco\0");
  insert_tail1(&p,"marco");


  printlist1(p);
  destroy1(&p);
  printlist1(p);

  return 0;
}
*/
