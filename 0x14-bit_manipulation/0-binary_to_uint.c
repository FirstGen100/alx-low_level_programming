# include "main.h"
/**
 * binary_to_uint - convert binary to uint
 * @b: binary number
 * Return: int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, base = 1;
	int i;

	for (i = 0; b[i] != '\0';)
		i++;
	i--;

 	for (; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result += (b[i] - '0') * base;
		base *= 2;
	}
	return (result);
}

