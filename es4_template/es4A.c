#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "es4A.h"

int match(char *s, char *crlf,char *lfcr)
{
    int c = 0, l = strlen(crlf);

    while (*s != '\0') {
        if (strncmp(s, crlf, l) == 0 || strncmp(s, lfcr, l) == 0){
            s += l;
            c++;
        }else{
            s++;
        }
    }
    return c;
}


int wc(const char *filename, int *chars, int *words, int *lines){

    FILE *fp = fopen(filename, "r");
    char *buffer = NULL;
    char ch;
    int i = 0;
    int risp = 1;
    char delim[] = " \n\r";
    char *ptr = NULL;

    *chars = 0;
    *words = 0;
    *lines = 0;


    if (fp == NULL){
        return !risp;
    }else{
        /*conto i caratteri fino alla fine del file*/
        while ((ch = fgetc(fp)) != EOF){
            i++;
        }
        fclose(fp);

        /*alloco dinamicamente il buffer per contenere tutti i caratteri
        in base ai caratteri contati prima */
        buffer = (char *)malloc((i+1) * sizeof(char));

        fp = fopen(filename, "r");

        /*poplo il buffer con i caratteri del file*/
        i = 0;
        while ((ch = fgetc(fp)) != EOF){
            buffer[i]=ch;
            i++;
        }
        fclose(fp);
        buffer[i] = '\0';

        /*ritorno i caratteri contati al chiamante*/
        *chars = i;

        *lines = (match(buffer, "\n","\r") - match(buffer, "\n\r","\r\n"));

        if(buffer[i - 1] != '\n' && buffer[i - 1] != '\r' && buffer[i - 1] != '\0') *lines += 1;


        /*conto le parole e ritorno al chiamante*/
        ptr = strtok(buffer, delim);
        while(ptr != NULL){
          *words += 1;
        	ptr = strtok(NULL, delim);
        }

    }

    free(ptr);
    free(buffer);

    return risp;
}
