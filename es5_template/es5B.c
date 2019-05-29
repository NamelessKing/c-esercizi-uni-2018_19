#include <stdlib.h>
#include "es5B.h"


int if_exist(tlista l,int valore){
    int risp = 0;

    while(l!=NULL && !risp){
        risp = l->valore == valore;
        l = l->next;
    }

    return risp;
}


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

tlista intersezione(tlista lista1, tlista lista2){
    tlista out = NULL;
    while(lista1 != NULL){
        if(if_exist(lista2,lista1->valore) && !if_exist(out,lista1->valore)){
            inserisci(&out,lista1->valore);
        }
        lista1 = lista1->next;
    }
    return out;
}
