#include <stdio.h>

void print_diagsums(int *a, int size) {
    int sum1 = 0; //diagonal from top-left to bottom-right
    int sum2 = 0; //diagonal from top-right to bottom-left
    for (int i = 0; i < size*size; i += size+1) { //top-left to bottom-right
        sum1 += *(a+i);
    }







