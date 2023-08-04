#include "main.h"
/**
 * get_bit - get bit from given index
 * @n: given bits
 * @index: needed bit
 * Return: int(bit)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	return ((index > (8 * sizeof(n) - 1)) ? -1 : (int)(n >> index) & 1);
}

