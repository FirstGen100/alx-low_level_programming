#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
* @b: unsigned int variable 
* Return: pointer to the allocated memory
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);
	if (ptr == NULL)
	{
		return (98);
	}
	return (ptr);
}
