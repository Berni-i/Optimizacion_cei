#!/bin/bash

gcc -Wall -O0 sinOptimizar.c -o programaSinOptimizar
gcc -Wall -O0 optimizado.c -o programaOptimizado
gcc -Wall -O0 optimizado_p2.c -o programaOptimizado_p2
gcc -Wall -O0 optimizado_p7.c -o programaOptimizado_p7
gcc -Wall -O0 optimizado_p10.c -o programaOptimizado_p10
gcc -Wall -O0 optimizado_p15.c -o programaOptimizado_p15
gcc -Wall -O0 optimizado_p40.c -o programaOptimizado_p40

./programaSinOptimizar
./programaOptimizado
./programaOptimizado_p2
./programaOptimizado_p7
./programaOptimizado_p10
./programaOptimizado_p15
./programaOptimizado_p40



