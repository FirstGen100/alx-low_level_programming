#include "main.h"

/**
 * clear_bit - set value of bit to 0 at index
 * @n: number
 * @index: position
 * Return: 1(success)0(error)
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int var;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	var = ~(1UL << index);
	*n &= var;

	return (1);
}
