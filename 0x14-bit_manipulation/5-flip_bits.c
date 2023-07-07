#include "main.h"

/**
 * flip_bits - return the no of bits to flip to change nos
 * @n: number 1
 * @m: number 2
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, count;

	count = 0;
	x = n ^ m;

	while (x != 0)
	{
		x &= (x - 1);
		count++;
	}

	return (count);
}

