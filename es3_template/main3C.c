#include <stdio.h>
#include "es3C.h"

/*int main(int argc, char const *argv[]) {
  int i;
  esempio utilizzo parametri da linea di comando
  for (i=0; i<argc; i++) {
    printf("%d: \"%s\"\n", i, argv[i]);
  }
  return 0;
}*/

int main(){

  int a[] = { 1,1,1,6 } ;
  int b[] = {5,5,5,10};
  printf("%d",zaino(b,a,4,6));
  return 0;
}
