#include "es3B.h"

int change( int coins[], int size, int n ){

    if (n == 0){
        return 1;
    }

    if (n < 0){
        return 0;
    }

    if (size <=0 && n >= 1){
        return 0;
    }

    return change( coins, size - 1, n ) + change( coins, size, n-coins[size-1] );
}



