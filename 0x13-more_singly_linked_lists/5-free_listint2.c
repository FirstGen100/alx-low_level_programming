#include "lists.h"

/**
 * free_listint2 - frees a listint list
 * @head: start of list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *current;

	current = *head;
	if (head == NULL)
		return;
	while (current != NULL)
	{
		temp = current;
		current = current->next;
		free(temp);
	}
	*head = NULL;
}

