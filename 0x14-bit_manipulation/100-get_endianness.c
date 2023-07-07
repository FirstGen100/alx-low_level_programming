#include "main.h"

/**
 * get_endianness - checks endianness
 *
 *
 * Return: 1(small endian) 0(big endian)
 */
int get_endianness(void)
{
	int x = 1;
	char *copy = (char *)&x;

	if (*copy == 1)
		return (1);
	else
		return (0);
}

