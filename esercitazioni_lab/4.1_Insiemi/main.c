#include <stdio.h>
#include "insiemi.h"

/*

RICORDARSI di compilare con:
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o insiemi insiemi.c main.c -lm && ./insiemi

IMPORTANTE:
NON CONSEGNARE I FILE CONTENENTI main E GLI HEADER

*/

int main() {
    int i;
    insieme A;
    insieme B;
    insieme ris;
    inizializza_insieme(A);
    inizializza_insieme(B);
    inizializza_insieme(ris);

    /*inserimento elementi in A*/
    inserisci_elemento_insieme(A,20);
    inserisci_elemento_insieme(A,8);
    inserisci_elemento_insieme(A,7);
    inserisci_elemento_insieme(A,3);
    inserisci_elemento_insieme(A,0);
    inserisci_elemento_insieme(A,4);

    /*inserimento elementi in B*/
    inserisci_elemento_insieme(B,30);
    inserisci_elemento_insieme(B,4);
    inserisci_elemento_insieme(B,2);
    inserisci_elemento_insieme(B,18);
    inserisci_elemento_insieme(B,9);
    inserisci_elemento_insieme(B,1);
    inserisci_elemento_insieme(B,20);

    for(i = 0;i<=A[0];i++){
        printf("%d   %d\n",A[i],i);
    }
    printf("\n\n");


    ordina_insieme(B);

    for(i = 0;i<=B[0];i++){
        printf("%d   %d\n",B[i],i);
    }
    printf("\n\n");


    intersezione_insiemi(A,B,ris);



    for(i = 0;i<=ris[0];i++){
        printf("%d   %d\n",ris[i],i);
    }
    printf("\n\n");
    return 0;
}
