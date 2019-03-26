#!/bin/bash
#Utilizzo:
# ./compila.sh -o ESEGUIBILE FILE1.c FILE2.c FILE3.c ....

gcc -g3 -Og -ansi -pedantic -Wall -Wextra $* -lm
