#include <stdio.h>
#include "es3D.h"

int main(){

  int a[] = {1,2,3,4} ;
  int lung = sizeof(a) / sizeof(a[0]);
  printf("%d\n",sequenza_decrescente_massima(a,&lung));
  printf("%d\n",lung);
  return 0;
}
