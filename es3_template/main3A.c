#include <stdio.h>
#include "es3A.h"

/*int main(int argc, char const *argv[]) {
  int i;
   esempio utilizzo parametri da linea di comando
  for (i=0; i<argc; i++) {
    printf("%d: \"%s\"\n", i, argv[i]);
  }
  return 0;
}*/

int main(){
  char frase[] = "  ytlllt                         y";
  printf("%d",palindroma_ns(frase));


  return 0;
}
