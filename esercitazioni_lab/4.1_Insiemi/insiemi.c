#include <stdio.h>
#include "insiemi.h"


void inizializza_insieme(insieme A){
    A[0] = 0;
}


int inserisci_elemento_insieme(insieme A,int x){
    int risp = 0;
    if(!insieme_contiene(A,x) && A[0]<MAX_ELEMENTI){
        A[0]++;
        A[A[0]]=x;
        risp = !risp;
    }
    return risp;
}


int elimina_elemento_insieme(insieme A,int x){
    int i,risp = 0;
    if(!insieme_contiene(A,x)){
        return risp;
    }

    for(i = 1; A[i] != x; i++);

    /*printf("\n%d\n",i);*/

    for(i = i; i<=A[0]; i++){
        A[i] = A[i + 1];
    }

    A[0]--;
    return !risp;
}


int insieme_contiene(insieme A,int x){
    int i,risp = 0;

    for(i = 1; i <= A[0] && !risp; i++){
        if(x == A[i]){
            risp = !risp;
        }
    }
    return risp;
}


void intersezione_insiemi(insieme A,insieme B,insieme risultato){
    int i,j;
    for(i = 1; i<=A[0]; i++){
        if(insieme_contiene(B,A[i])){
            inserisci_elemento_insieme(risultato,A[i]);
        }
    }
}


void unione_insiemi(insieme A,insieme B,insieme risultato){
    int i;
    for(i = 1; i<=A[0] || i<=B[0]; i++){
        if(i<=A[0]){
            inserisci_elemento_insieme(risultato,A[i]);
        }

        if(i<=B[0]){
            inserisci_elemento_insieme(risultato,B[i]);
        }
    }
}


void differenza_insiemi(insieme A,insieme B,insieme risultato){
    int i;
    for(i = 1; i<=A[0]; i++){
        if(!insieme_contiene(B,A[i])){
            inserisci_elemento_insieme(risultato,A[i]);
        }
    }
}


void ordina_insieme(insieme A){
    int i,j,temp;

    for(i = 1; i<=A[0]; i++){
        for(j = i + 1; j<=A[0]; j++){
            if(A[j] < A[i]){
                temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}
