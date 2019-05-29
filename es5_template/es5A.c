#include <stdlib.h>
#include "es5A.h"


void inserisci(tlista *lista, int valore){

    tlista temp = NULL,node = NULL,prev=NULL;

    if(*lista == NULL){
        *lista = (tlista)malloc(sizeof(struct cella));
        (*lista)->valore = valore;
        (*lista)->next = NULL;
    }else{
        temp = *lista;

        while( temp != NULL && temp->valore < valore ){
            prev = temp;
            temp = temp->next;
        }

        node = (tlista)malloc(sizeof(struct cella));
        node->valore = valore;
        node->next = NULL;


        if(temp == NULL){
            prev->next = node;
        }else{
            node->valore = temp->valore;
            node->next = temp->next;
            temp->valore = valore;
            temp->next = node;
        }
    }
}


