#include "lists.h"

/**
 * free_listint - frees memory space
 * @head: list
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return (NULL);
	free_list(head->next);
	free(head);
}

