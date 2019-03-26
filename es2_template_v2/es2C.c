#include "es2C.h"

int check_contenuto(char s[], char M[RIGHE][COLONNE],int ii, int jj,char dir){
  int k = 0,risp = 0;

  while(s[k]  && !risp){

    if(s[k] == M[ii][jj] && dir == 'r' && jj < COLONNE ){
      jj++;
    }else
    if(s[k] == M[jj][ii] && dir == 'c' && jj < RIGHE){
      jj++;
    }else
    if(s[k] == M[jj][ii] && dir == 'x' && jj < RIGHE && ii < COLONNE){
      jj++;
      ii++;
    }else{
      risp = !risp;
    }
    k++;

  }
  return !risp;
}


int contaOccorrenze(char s[], char M[RIGHE][COLONNE]) {
  int count = 0,s_index,i,j;

  for(i = 0;i<RIGHE && s[0];i++){
    s_index = 0;
    for(j = 0;j<COLONNE;j++){

      if((s[s_index]==M[i][j]) && (check_contenuto(s,M,i,j,'r'))){
        count++;
      }
    }
  }

  for(i = 0;i<COLONNE && s[0];i++){
    s_index = 0;
    for(j = 0;j<RIGHE;j++){

      if(s[s_index]==M[j][i] && check_contenuto(s,M,i,j,'c')){
        count++;
      }

      if(s[s_index]==M[j][i] && check_contenuto(s,M,i,j,'x')){
        count++;
      }
    }
  }
  return count;
}

/*

int check_riga(char s[], char M[RIGHE][COLONNE]){
  int count = 0,s_index,i,j;

  for(i = 0;i<RIGHE && s[0];i++){
    s_index = 0;
    for(j = 0;j<COLONNE;j++){

      if((s[s_index]==M[i][j]) && (check_contenuto(s,M,i,j,'r'))){
        count++;
      }
    }
  }
  return count;
}


int check_colonna(char s[], char M[RIGHE][COLONNE]){
  int count = 0,s_index,i,j;

  for(i = 0;i<COLONNE && s[0];i++){
    s_index = 0;
    for(j = 0;j<RIGHE;j++){

      if(s[s_index]==M[j][i] && check_contenuto(s,M,i,j,'c')){
        count++;
      }

      if(s[s_index]==M[j][i] && check_contenuto(s,M,i,j,'x')){
        count++;
      }
    }
  }
  return count;
}

*/





/*int check_diagonale(char s[], char M[RIGHE][COLONNE]){
  int count = 0,s_index,i,j;

  for(i = 0;i<COLONNE && s[0];i++){
    s_index = 0;
    for(j = 0;j<RIGHE;j++){

      if(s[s_index]==M[j][i] && check_contenuto(s,M,i,j,'x')){
        count++;
      }
    }
  }
  return count;
}*/
