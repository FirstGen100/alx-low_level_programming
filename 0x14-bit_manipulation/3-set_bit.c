#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: given bits
 * @index: required bit operation
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int flag = 1UL << index;

	*n |= flag;

	return (1);
}

