#include <stdio.h>
#include "es4B.h"

/*
gcc -g3 -std=gnu89 -fuse-ld=gold -fsanitize=address -fsanitize=undefined -pedantic-errors -Wall -Wextra -o es4B es4B.c main4B.c && ./es4B
*/

int main() {


  char filename[] = "es4B.txt";

  FILE *fp = fopen(filename, "w");
  fputs("linea 1.1\nlinea due", fp);
  fclose(fp);



  elimina_caratteri("es4B.txt","es4B_ris.txt","ei");



  return 0;
}
