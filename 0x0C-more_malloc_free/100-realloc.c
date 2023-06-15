#include "main.h
/**
* _realloc - realllocates memory
* @ptr: pointer to memory
* @old_size: size of original memory
* @new_size: newsize of memory
* Return: void
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int i;

	if (ptr == NULL)
	{

	[A
	p = malloc(new_size);
	return (p);
	}
	if (new_size == 0



	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (new_si




























