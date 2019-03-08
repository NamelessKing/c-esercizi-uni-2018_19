#include <stdio.h>
#include <math.h>
#include "es1B.h"

/*

Compilare con:
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o es1B es1B.c main1B.c -lm

Eseguire con:
./es1B

Modificare la funzione main per aggiungere altri casi di test se necessario.
I casi di test utilizzati dopo la consegna saranno probabilmente diversi da quelli qui indicati.

IMPORTANTE:
NON CONSEGNARE I FILE CONTENENTI main E GLI HEADER

*/

int errori(double x, double epsilon) {
    double risultato = radice_quadrata(x,epsilon);
    double risultato_atteso = sqrt(x);
    if (fabs(risultato - risultato_atteso) > epsilon) {
      printf("ERRORE: \nradice_quadrata(%.13f,%.13f)=%.13f\nrisultato atteso = %.13f\n\n", x,epsilon, risultato, risultato_atteso);
      printf("Approssimazione: %.13f > %.13f\n\n", fabs(risultato-risultato_atteso), epsilon);
      return 1;
    }
    return 0;
}

int main() {
  const int n = 900;
  int i,num_errori=0;

  for (i=1; i<=n; i++) {
    num_errori += errori(1.0 + i / 100.0, 1E-1);
    num_errori += errori(1.0 + i / 100.0, 1E-3);
    num_errori += errori(1.0 + i / 100.0, 1E-6);
  }
  return  num_errori != 0;

}
