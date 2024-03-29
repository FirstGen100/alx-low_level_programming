#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function on each element of an array.
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to callback function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

