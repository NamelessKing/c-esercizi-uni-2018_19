#include "es2B.h"

int moda(int v[], int n){

  int i,j,m = v[0],count,maxcount = 0;

  for (i = 0; i < n;i++){
    count = 1;
    for(j = i + 1;j<n;j++){
      if(v[i] == v[j]){
        count++;
      }
    }

    if(count > maxcount){
      m = v[i];
      maxcount = count;
    }else if(count == maxcount){
      m = m < v[i] ? m : v[i];
    }
  }
  return m;
}
