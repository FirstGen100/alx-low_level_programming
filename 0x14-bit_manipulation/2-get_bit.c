#include "main.h"
/**
 * get_bit - get bit from given index
 * @n: given bits
 * @index: needed bit
 * Return: int(bit)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int flag = 1UL << index;

	if ((n & flag) != 0)
		return (1);
	else
		return (0);
}

