#include "lists.h"
/**
 * print_list - prints items in a list
 * @h: head of the list
 * Return: size_t
 */
size_t print_list(const list_t *h)
{
	size_t count;
	const list_t *temp;
	temp = h;

	for (count = 0; temp; count++)
	{
		if (temp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (count);
}

