#include <stdlib.h>
#include "es5C.h"

int sequenza(tlista lista1, tlista lista2){
    int risp = 0;

    while(!risp){
        if(lista2 == NULL){
            risp = 2;
        }else
        if(lista2 != NULL && lista1 == NULL){
            risp = 3;
        }else{
            risp = !(lista1->valore == lista2->valore);
            lista1 = lista1->next;
            lista2 = lista2->next;
        }
    }

    return risp==2?1:0;
}

int  sottosequenza(tlista lista1, tlista lista2){
    int risp = 0;
    if(lista2 == NULL||(lista1==NULL && lista2==NULL)){
        return !risp;
    }else if(lista1 == NULL){
        return risp;
    }else{
        while(lista1 != NULL && !risp){
            if(lista1->valore == lista2->valore){
                risp = sequenza(lista1,lista2);
            }
            lista1 = lista1->next;
        }
    }


    return risp;
}
