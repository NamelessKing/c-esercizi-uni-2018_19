#include "es1C.h"


int isPrime(int n){

  int i;
  int prime = 0;
  for (i = 2; (i < n) && !prime; i++){
    if(n%i == 0 ) prime = !prime;
  }
  return !prime;
}

int goldbach(int n) {
  int i;
  int p1 = 0;
  for ( i = 2; i < n && !p1; i++) {
    if(isPrime(i) && isPrime(n - i)){
      p1 = i;
    }
  }
  return p1;
}
