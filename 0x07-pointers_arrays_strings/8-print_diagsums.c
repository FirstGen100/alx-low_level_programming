#include <stdio.h>
<<<<<<< HEAD

void print_diagsums(int *a, int size) {
    int sum1 = 0; //diagonal from top-left to bottom-right
    int sum2 = 0; //diagonal from top-right to bottom-left
    for (int i = 0; i < size*size; i += size+1) { //top-left to bottom-right
        sum1 += *(a+i);
    }







=======
#include "main.h"
/**
 * print_diagsums - a function that prints the sum of two diagonals
 * @size: size x size of the square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int tl = 0;
	int tr = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		tl += a[i];
	}

	for (i = size - 1; i < s - 1; i += size - 1)
	{
		tr += a[i];
	}

	printf("%d, %d\n", tl, tr);
}
>>>>>>> 50d2977b3202ddc9b460826c6e851d48d9dfa6f4
