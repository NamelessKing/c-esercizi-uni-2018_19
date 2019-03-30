#include <stdio.h>
#include "insiemi_ordinati.h"


void inizializza_insieme_ordinato(insieme_ordinato A){
    A[0] = 0;
}


int inserisci_elemento_insieme_ordinato(insieme_ordinato A,int x){
    int i,j,risp = 0;
    if(insieme_ordinato_contiene(A,x) || A[0] >= MAX_ELEMENTI){
        return risp;
    }

    for(i = 1; i <= A[0] && !risp; i++){
        if(x < A[i]){
            risp = !risp;
            i--;
        }
    }

    for(j = A[0] + 1; j >= i; j--){
        A[j] = A[j - 1];
    }

    A[0]++;
    A[i] = x;

    return !risp;
}


int elimina_elemento_insieme_ordinato(insieme_ordinato A,int x){
    int i,risp = 0;
    if(!insieme_ordinato_contiene(A,x)){
        return risp;
    }

    for(i = 1; A[i] != x; i++);

    for(i = i; i<=A[0]; i++){
        A[i] = A[i + 1];
    }

    A[0]--;
    return !risp;
}


int insieme_ordinato_contiene(insieme_ordinato A,int x){
    int i,risp = 0;

    for(i = 1; i <= A[0] && !risp; i++){
        if(x == A[i]){
            risp = !risp;
        }
    }
    return risp;
}


void intersezione_insiemi_ordinati(insieme_ordinato A,insieme_ordinato B,insieme_ordinato risultato){
    int i;
    for(i = 1; i<=A[0]; i++){
        if(insieme_ordinato_contiene(B,A[i])){
            inserisci_elemento_insieme_ordinato(risultato,A[i]);
        }
    }
}


void unione_insiemi_ordinati(insieme_ordinato A,insieme_ordinato B,insieme_ordinato risultato){
    int i;
    for(i = 1; i<=A[0] || i<=B[0]; i++){
        if(i<=A[0]){
            inserisci_elemento_insieme_ordinato(risultato,A[i]);
        }

        if(i<=B[0]){
            inserisci_elemento_insieme_ordinato(risultato,B[i]);
        }
    }
}


void differenza_insiemi_ordinati(insieme_ordinato A,insieme_ordinato B,insieme_ordinato risultato){
    int i;
    for(i = 1; i<=A[0]; i++){
        if(!insieme_ordinato_contiene(B,A[i])){
            inserisci_elemento_insieme_ordinato(risultato,A[i]);
        }
    }
}




void stampa_insieme(insieme_ordinato A){
    int i;
    for(i = 0;i<=A[0];i++){
        printf("[%d,%d]--",A[i],i);
    }
    printf("\n\n");
}
