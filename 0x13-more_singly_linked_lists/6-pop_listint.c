#include "lists.h"

/**
 * pop_listint - delete the head node and return the head node's data
 * @head: start of list
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp, *current;
	int i;

	current = temp = *head;
	if (head == NULL)
		return (0);
	i = current->n;
	*head = current->next;
	free(temp);
	return (i);
}

