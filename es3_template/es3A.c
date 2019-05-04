#include <string.h>
#include "es3A.h"

int count_char(char *s,int i){
    if(!s[i]){
        return 0;
    }

    if(s[i] == ' '){
        return count_char(s,++i);
    }else{
        return 1 + count_char(s,++i);
    }
}

int aux_pal(char *s,int i,int j,int inizio_i,int fine_j){

    if(j<=i){
        return 1;
    }

    if(s[inizio_i] == ' '){
        return aux_pal(s,i,j,inizio_i + 1,fine_j);
    }

    if(s[fine_j] == ' '){
        return aux_pal(s,i,j,inizio_i,fine_j - 1);
    }

    if(s[inizio_i] == s[fine_j]){
        return aux_pal(s,i + 1,j - 1,inizio_i + 1,fine_j - 1);
    }else{
        return 0;
    }

}

int palindroma_ns(char *s){
    int i = 0,j = count_char(s,0) - 1,inizio_i = 0,fine_j = strlen(s) - 1 ;
    return aux_pal(s,i,j,inizio_i,fine_j);
}
