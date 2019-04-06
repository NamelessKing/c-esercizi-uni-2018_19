#include <stdio.h>


void eliminazione_newline(char *str,int i){

    if(!str[i]){
        return;
    }

    if(str[i] == '\n'){
        str[i] = ' ';
    }

    printf("%c",str[i]);

    eliminazione_newline(str, i + 1);
}

void insertion(inta[],int dim){
    int i,j,temp;

    for(i = 0; i < dim; i++ ){
        for(j = i; j>0; j--){
            if(a[j] < a[j - 1]){
                temp = a[j];
                a[j - 1] = a[j];
                a[j - 1] = temp;
            }
        }
    }
}



int main(){

    char x[] = "ciao \n a tutti";

    eliminazione_newline(x,0);

    return 0;
}
