#include <stdio.h>
#include "es2A.h"

/*

RICORDARSI di compilare con:
gcc -g3 -Og -ansi -pedantic -Wall -Wextra -o .....  -lm

IMPORTANTE:
NON CONSEGNARE I FILE CONTENENTI main E GLI HEADER

*/

int main() {

    char str[100]="                      c        ia         o                          ";
    riduciSpazi(str);
    printf("\n\n%s", str);
    printf("*");

    return 0;
}
