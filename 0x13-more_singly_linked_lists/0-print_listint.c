#include "lists.h"

/**
 * print_listint - print elements of list
 * @h: head
 * Return: number of nodes
 *
 *
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h->n != NULL)
	{
		
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (counter);
}


