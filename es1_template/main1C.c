#include <stdio.h>
#include "es1C.h"

/*

Compilare con:
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o es1C es1C.c main1C.c -lm

Eseguire con:
./es1C

IMPORTANTE:
NON CONSEGNARE I FILE CONTENENTI main E GLI HEADER

*/

int main() {

  int testNum[]={4,6,8,10,12,14,16,18,20,22,24,26,28,30};
  int result[] ={2,3,3, 3, 5, 3, 3, 5, 3, 3, 5, 3, 5, 7};
  int dim = 14;
  int i;


  for(i = 0; i < dim; i++){
    if(goldbach(testNum[i]) == result[i]){
      printf("%d == %d\n",goldbach(testNum[i]),result[i]);
    }else{
      printf("ERRORE  :%d != %d\n",goldbach(testNum[i]),result[i]);
    }
  }


  return 0;
}
