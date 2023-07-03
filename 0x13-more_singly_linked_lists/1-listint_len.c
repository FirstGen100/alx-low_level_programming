#include "lists.h"
/**
 * print_listint - prints elements of list
 * @h: head of list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{

	int ptr, count;
	
	ptr = h;
	while (ptr != NULL)
	{
		printf("%d", ptr->n);
		ptr = ptr->next;
	}
	return (count);

}

