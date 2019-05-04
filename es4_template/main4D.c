#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "es4D.h"

/*
COMPILE WITH:
gcc -g3 -std=gnu89 -fuse-ld=gold -fsanitize=address -fsanitize=undefined -pedantic-errors -Wall -Wextra -o es4D es4D.c main4D.c && ./es4D
*/


int main() {

  char filename[] = "es4D.txt";

  FILE *fp = fopen(filename, "w");
  fputs(".porco dio dio", fp);
  fclose(fp);



  conta_parole("es4D.txt","es4D_ris.txt");
  return 0;
}
