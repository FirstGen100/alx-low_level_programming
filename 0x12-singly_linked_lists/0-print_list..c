#include "main.h"

/**
 * print_list - prints elements in list
 * @h: start of list
 * Return: size_t variable
 */
size_t print_list(const list *h)
{
	size_t count = 0;
	const list_t *temp;
	temp = h;

	for (count = 0; temp; count++)
	{
		if (temp->str = NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (count);
}

