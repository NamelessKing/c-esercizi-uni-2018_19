#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "es4C.h"


struct node{
    char *elem;
    int counter;
    struct node * next;
};

typedef struct node *list;


void destroy(list *pl){
    list l;
    while(*pl){
        l=(*pl)->next;
        free((*pl)->elem);
        free(*pl);
        *pl=l;
    }
}

int insert_tail(list *pl,char *elem){
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
    return insert_tail((&(*pl)->next),elem);
  }
}

int lista_parole(const char *input, const char *output){

  FILE *fp_input,*fp_output;
  list p = NULL;
  int risp = 1,i=0;
  char *ptr = NULL,*buffer = NULL,delim[] = " \n\r",ch;
  list l = NULL;

  fp_input = fopen(input, "r");

  if (fp_input == NULL){
    return !risp;
  }else{
    fp_output = fopen(output, "w");

    /*conto i caratteri fino alla fine del file*/
    while ((ch = fgetc(fp_input)) != EOF){
      i++;
    }
    fclose(fp_input);

    /*alloco dinamicamente il buffer per contenere tutti i caratteri
    in base ai caratteri contati prima */
    buffer = (char *)malloc((i+1) * sizeof(char));

    fp_input = fopen(input, "r");

    /*poplo il buffer con i caratteri del file*/
    i = 0;
    while ((ch = fgetc(fp_input)) != EOF){
        buffer[i]=ch;
        i++;
    }
    fclose(fp_input);
    buffer[i] = '\0';

    ptr = strtok(buffer, delim);
    while(ptr != NULL){
      /*printf("%d\n\n\n\n\n",ptr[4]);*/
      insert_tail(&p,ptr);
    	ptr = strtok(NULL, delim);
    }

    l = p;
    while(l!=NULL){
      fputs(l->elem, fp_output);
      l=l->next;
      if(l!=NULL)fputs("\n",fp_output);
    }
  }



  destroy(&p);
  destroy(&l);
  free(ptr);
  free(buffer);
  fclose(fp_output);

  return risp;
}
