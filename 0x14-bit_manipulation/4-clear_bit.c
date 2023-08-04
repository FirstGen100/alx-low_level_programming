#include "main.h"
/**
 * clear_bit -
 * @n: given bits
 * @index: required change
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int flag = ~(1UL << index);

	*n &= flag;

	return ((index > 8 * sizeof(*n)) ? -1 : 1);
}

