#!/bin/bash
#Utilizzo:
# ./compila.sh esercizio
# ES: ./compila.sh 3D
gcc -g3 -Og -ansi -pedantic-errors -Wall -Wextra -o es$1 es$1.c main$1.c $2
