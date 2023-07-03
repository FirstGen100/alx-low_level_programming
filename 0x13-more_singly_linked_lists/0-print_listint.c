#include "main.h"

/**
 * print_listint - print elements of list
 * @h: head
 * Return: number of nodes
 *
 *
 */
size_t print_listint(const listint_t *h)
{
	int ptr, count;

	if (ptr ==NULL)
		printf("List is empty");
	while (h != NULL)
	{
		printf("%d"
				
				
				, ptr->n);
		ptr = ptr->next;
		count++;
	}
	return (count);
}

