#include "es3C.h"

int max(int a, int b) { return (a > b)? a : b; }

int zaino(int valore[], int peso[], int n, int peso_massimo){

    if(n == 0 || peso_massimo == 0){
        return 0;
    }

    if(peso[n - 1] > peso_massimo){
        return zaino(valore,peso,n - 1,peso_massimo);
    }else{
        return max(valore[n - 1] + zaino(valore,peso,n - 1,peso_massimo - peso[n - 1] ),
        zaino(valore,peso,n - 1,peso_massimo));
    }
}



