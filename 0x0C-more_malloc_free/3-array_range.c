#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* array_range - create an array of integers
* @min: smallest no
* @max: largest no
* Return: pointer to array
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i, size, n;

	if (min > max)
		return (NULL);
	size = max - min;
	ptr = malloc((size + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	n = min;
	while (n <= max)
	{
		ptr[i] = n;
		i++;
		n++;
	}
	return (ptr);
}
