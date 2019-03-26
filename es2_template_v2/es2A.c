#include "es2A.h"

void riduciSpazi(char str[]) {
  int i,j;
  for(i=0;str[i];i++){
    if(str[i]==' ' && str[i+1]==' '){
      for(j = i;str[j];j++ ){
        str[j] = str[j+1];
      }
      i--;
    }
  }
  return;
}
