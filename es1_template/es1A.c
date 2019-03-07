#include "es1A.h"

double serie_armonica(double epsilon) {

  double i = 1, somma = 0;

  while ((1.0/(i*i)) > epsilon){
    somma += (1.0/(i*i));
    i++;
  }

  return somma;
}
