#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: bits 1
 * @m: bits 2
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count;

	count = 0;

	for (i = 8 * sizeof(n) - 1; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			count++;
	return (count);
}

