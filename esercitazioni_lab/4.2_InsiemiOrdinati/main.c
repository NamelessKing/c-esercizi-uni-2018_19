#include <stdio.h>
#include "insiemi_ordinati.h"

/*

RICORDARSI di compilare con:
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o insiemi insiemi.c main.c -lm && ./insiemi

IMPORTANTE:
NON CONSEGNARE I FILE CONTENENTI main E GLI HEADER

*/

int main() {

    insieme_ordinato A;
    insieme_ordinato B;
    insieme_ordinato ris;
    inizializza_insieme_ordinato(A);
    inizializza_insieme_ordinato(B);
    inizializza_insieme_ordinato(ris);

    /*inserimento elementi in A*/
    inserisci_elemento_insieme_ordinato(A,40);
    inserisci_elemento_insieme_ordinato(A,99);
    inserisci_elemento_insieme_ordinato(A,1);
    inserisci_elemento_insieme_ordinato(A,20);
    inserisci_elemento_insieme_ordinato(A,50);
    inserisci_elemento_insieme_ordinato(A,10);
    inserisci_elemento_insieme_ordinato(A,-20);
    inserisci_elemento_insieme_ordinato(A,45);

    /*inserimento elementi in B*/
    /*inserisci_elemento_insieme_ordinato(B,30);
    inserisci_elemento_insieme_ordinato(B,4);
    inserisci_elemento_insieme_ordinato(B,2);
    inserisci_elemento_insieme_ordinato(B,18);
    inserisci_elemento_insieme_ordinato(B,9);
    inserisci_elemento_insieme_ordinato(B,1);
    inserisci_elemento_insieme_ordinato(B,20);*/

    stampa_insieme(A);

    return 0;
}
