#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "es4E.h"


/*
COMPILE WITH:
gcc -g3 -std=gnu89 -fuse-ld=gold -fsanitize=address -fsanitize=undefined -pedantic-errors -Wall -Wextra -o es4E es4E.c main4E.c && ./es4E
*/

int main() {
  char input1[] = "es4E1.txt";
  char input2[] = "es4E2.txt";

  FILE *fp_in1 = fopen(input1, "w");
  FILE *fp_in2 = fopen(input2, "w");
  fputs("ciao a tutt ", fp_in1);
  fputs("ciao a tutti", fp_in2);
  fclose(fp_in1);
  fclose(fp_in2);



  intersezione_parole(input1,input2,"es4E_ris.txt");
  return 0;
}
