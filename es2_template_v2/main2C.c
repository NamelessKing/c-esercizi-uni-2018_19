#include <stdio.h>
#include "es2C.h"

/*

RICORDARSI di compilare con:
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o ..... -lm

IMPORTANTE:
NON CONSEGNARE I FILE CONTENENTI main E GLI HEADER

*/

char M1[RIGHE][COLONNE] = {
    { 'g', 'h', 'h', 'h', 'h', 'x', 'o', 'x', 'g' },

    { 'o', 'u', 'n', 'l', 'o', 'n', 'u', 'n', 'o' },

    { 'l', 'b', 'k', 'u', 'o', 'y', 'v', 'v', 'x' },

    { 'o', 'z', 'o', 'l', 'o', 'h', 'c', 'c', 'c' },

    { 'g', 'b', 'k', 'u', 'o', 'h', 'c', 'c', 'g' }

};


/*char M[RIGHE][COLONNE] = {
    { 'x','x' },
    { 'x','x' }
};*/





int main() {
  /*int i,j;*/

  printf("%d",contaOccorrenze("xo",M1));

  /*printf("%d",length("llllla"));*/


 /* char M2[RIGHE][COLONNE] = {
    { 'l', 'o', 'l', 'o', 'l', 'o', 'u', 'l', 'c' },
    { 'o', 'u', 'n', 'n', 'o', 'n', 'u', 'n', 'o' },
    { 'k', 'b', 'k', 'n', 'o', 'o', 'c', 'c', 'c' },
    { 'o', 'b', 'o', 'n', 'o', 'h', 'c', 'c', 'c' },
    { 'k', 'b', 'k', 'n', 'o', 'h', 'c', 'c', 'c' }

};



  for(i = 0;i<10 ;i++){

    for(j = 0;j<20;j++){
      printf("%c ",M2[i][j]);

    }
    printf("\n");
  }*/


  return 0;
}
