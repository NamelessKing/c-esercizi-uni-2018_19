#include <stdio.h>
#include <math.h>
#include "es1A.h"

/*

Compilare con:
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o es1A es1A.c main1A.c -lm

Eseguire con:
./es1A

Modificare la funzione main per aggiungere altri casi di test se necessario.
I casi di test utilizzati dopo la consegna saranno probabilmente diversi da quelli qui indicati.

IMPORTANTE:
NON CONSEGNARE I FILE CONTENENTI main E GLI HEADER

*/

int errato(double epsilon, double risultato_atteso) {
    double risultato = serie_armonica(epsilon);
    if (fabs(risultato - risultato_atteso) > 1E-10) {
      printf("ERRORE: \nserie_armonica(%.13f)=%.13f\nrisultato atteso = %.13f\n\n", epsilon, risultato, risultato_atteso);
      return 1;
    }
    return 0;
}

int main() {
  return  errato(0.5,1) ||
          errato(0.2,1.25) ||
          errato(0.1,1.36111111111111) ||
          errato(0.05,1.42361111111111) ||
          errato(0.03,1.46361111111111) ||
          errato(0.025,1.49138888888889) ||
          errato(0.020,1.5117970521542) ||
          errato(0.015,1.5274220521542) ||
          errato(0.01,1.54976773116654);

}
