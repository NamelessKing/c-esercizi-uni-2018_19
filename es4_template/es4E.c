#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "es4E.h"


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




int intersezione_parole(const char *input1, const char *input2, const char *output){

    FILE *fp_input1,*fp_input2,*fp_output;
    list p1 = NULL,p2= NULL,l1=NULL,l2=NULL,original = NULL,temp =NULL;
    int risp = 1,i=0,j=0;
    char *ptr = NULL,*buffer = NULL,delim[] = " \n\r",ch;


    fp_input1 = fopen(input1, "r");
    fp_input2 = fopen(input2, "r");

    if(fp_input1 == NULL || fp_input2 == NULL){
        return !risp;
    }else{
        fp_output = fopen(output, "w");

        /*conto i caratteri fino alla fine del file*/
        while ((ch = fgetc(fp_input1)) != EOF){
          i++;
        }
        fclose(fp_input1);

        buffer = (char *)malloc((i+1) * sizeof(char));

        fp_input1 = fopen(input1, "r");

        /*poplo il buffer con i caratteri del file*/
        i = 0;
        while ((ch = fgetc(fp_input1)) != EOF){
            buffer[i]=ch;
            i++;
        }
        fclose(fp_input1);
        buffer[i] = '\0';

        ptr = strtok(buffer, delim);
        while(ptr != NULL){
            insert_tail(&p1,ptr);
        	ptr = strtok(NULL, delim);
        }
        free(buffer);
        /****************************/

        /*conto i caratteri fino alla fine del file*/
        while ((ch = fgetc(fp_input2)) != EOF){
          j++;
        }
        fclose(fp_input2);

        buffer = (char *)malloc((j+1) * sizeof(char));

        fp_input2 = fopen(input2, "r");

        /*poplo il buffer con i caratteri del file*/
        j = 0;
        while ((ch = fgetc(fp_input2)) != EOF){
            buffer[j]=ch;
            j++;
        }
        fclose(fp_input2);
        buffer[j] = '\0';

        ptr = strtok(buffer, delim);
        while(ptr != NULL){
          /*printf("%d\n\n\n\n\n",ptr[4]);*/
            insert_tail(&p2,ptr);
        	ptr = strtok(NULL, delim);
        }

        free(buffer);
        free(ptr);

        l1=p1;
        while(l1!=NULL){
            l2 = p2;
            while(l2!=NULL){
                if(strcmp(l1->elem,l2->elem)==0){
                    insert_tail(&original,l1->elem);
                }
                l2=l2->next;
            }
            l1=l1->next;
        }

        temp=original;
        while(temp!=NULL){
            fputs(temp->elem, fp_output);
            temp=temp->next;
            if(temp!=NULL)fputs("\n", fp_output);
        }
    }

    fclose(fp_output);
    destroy(&l1);
    destroy(&p1);
    destroy(&l2);
    destroy(&p2);
    destroy(&temp);
    destroy(&original);

    return risp;
}
