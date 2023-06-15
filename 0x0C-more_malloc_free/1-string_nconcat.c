#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatenates strings
* @s1: first string
* @s2: second string
* @n: size of second string
* Return: pointer to memery
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *empt;
	unsigned int i, len, j, size;

	len = 0;
	empt = "";
	if (s1 == NULL)
		s1 = empt;
	if (s2 == NULL)
		s2 = empt;
	while (s1[len] != '\0')
		len++;
	size = (len + n) * sizeof(*ptr);
	ptr = malloc(size + 1);
	if (ptr == NULL)
		return(NULL);
	i = 0;
	while (i < size && s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i < size && s2 [j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	ptr[i] = '\0';
	return (ptr);
}
