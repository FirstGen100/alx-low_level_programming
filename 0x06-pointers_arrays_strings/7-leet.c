#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @n: input value
 *
 * Return: n
 */
char *leet(char *n)
{
	int i, j;
	char array1[] = "aAeEoOtTlL";
	char array2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == array1[j])
			{
				n[i] = array2[j];
			}
		}
	}
	return (n);
}
