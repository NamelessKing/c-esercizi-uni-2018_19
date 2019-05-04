#include <stdio.h>
#include "es5B.h"

int main(int argc, char const *argv[]) {
  int i;
  /* esempio utilizzo parametri da linea di comando */
  for (i=0; i<argc; i++) {
    printf("%d: \"%s\"\n", i, argv[i]);
  }
  return 0;
}
