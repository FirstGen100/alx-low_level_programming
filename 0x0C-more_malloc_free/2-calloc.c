#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocate memory for an array of elements
* @nmemb: number of elements
* @size: size of elements
* Return: pointer to memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int ptrsize, i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptrsize = nmemb * size;
	ptr = malloc(ptrsize);
	if(ptr == NULL)
	{
		return (NULL);
	}
	while (i < ptrsize)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
