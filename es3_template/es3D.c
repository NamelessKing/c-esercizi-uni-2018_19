#include "es3D.h"

int aux_sequenza_dec(int A[], int *lung,int i,int count,int max,int index){

    if(i >= *lung - 1){
        if(max < count){
            max = count;
            index =  i - count + 1;
        }
        *lung = max;
        return index;
    }

    if(A[i]>= A[i + 1]){
        return aux_sequenza_dec(A,lung,i + 1, count + 1,max,index);
    }else{
        if(max < count){
            max = count;
            index =  i - count + 1;
        }
        /*printf("%d\n",index);*/
        return aux_sequenza_dec(A,lung,i + 1, 1,max,index);
    }


}

int sequenza_decrescente_massima (int A[], int *lung){
    int i = 0,count = 1,max = 0,index = 0 ;
    return aux_sequenza_dec(A,lung,i,count,max,index);
}
