#include <stdio.h>
#include "es3B.h"

/*int main(int argc, char const *argv[]) {
  int i;
   esempio utilizzo parametri da linea di comando
  for (i=0; i<argc; i++) {
    printf("%d: \"%s\"\n", i, argv[i]);
  }
  return 0;
}*/


int main(){

  int a[] = { 2 , 3 ,3 , 4 } ;
  printf("%d",change(a,4,6));
  return 0;
}
