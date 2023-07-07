#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: binary number
 * Return: converted number(success) 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int final, counter;

	final = counter = 0;
	if (b == NULL)
		return (0);	

	while (b[counter] != '\0')
	{
		if (b[counter] == '0')
			final <<= 1;
		else if (b[counter] == '1')
		{
			final <<= 1;
			final += 1;
		}
		else
			return (0);
	counter++;
	}
	return (final);
}

