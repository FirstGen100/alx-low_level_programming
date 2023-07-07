#include "main.h"

/**
 * get_bit - get a bit at a given index
 * @n: bit
 * @index: required bit
 * Return: value of bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int var;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	var = 1UL << index;

	if ((n & var) != 0)
		return (1);
	else
		return (0);
}

