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
	unsigned int flipper = n ^ m;
	unsigned int count = 0;

	while (flipper)
	{
		count += flipper & 1;
		flipper >>= 1;
	}
	return (count);
}

