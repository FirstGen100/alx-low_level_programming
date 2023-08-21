#include "lists.h"
/**
 * add_dnodeint - add a new node at start of list
 * @head: start of list
 * @n: value to add
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	new_node = malloc(sizeof(dlistint_t));

	if (head == NULL || *head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	(*head)->prev = new_node;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
