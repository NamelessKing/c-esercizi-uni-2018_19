#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "es4B.h"

int elimina_caratteri(const char *input, const char *output, const char *elimina){

    FILE *fp_input,*fp_output;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;
    int risp = 1;
    char *ptr = NULL;

    fp_input = fopen(input, "r");

    if (fp_input == NULL){
        return !risp;
    }
    else{
        fp_output = fopen(output, "w");
        while((read = getline(&line, &len, fp_input)) != -1){
            ptr = strtok(line, elimina);
            while(ptr != NULL){
                fputs(ptr, fp_output);
            	ptr = strtok(NULL, elimina);
            }
        }
    }

    free(line);
    free(ptr);
    fclose(fp_input);
    fclose(fp_output);


    return risp;
}

