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
	unsigned int flipper = 0;
	unsigned int count = 0;

	for (count = 8 * sizeof(n) - 1; count >= 0; count--)
	{
		if (((n ^ m) >> count) & 1)
			flipper++;
	}
	return (flipper);
}

