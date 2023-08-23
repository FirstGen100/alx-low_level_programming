#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts new node at given index
 * @head: pointer to head
 * @idx: index
 * @n: value of new node
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *temp, *new_node, *tmp_prev;

	if (head == NULL && idx > 0)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n, new_node->prev = new_node->next = NULL;

	if (idx == 0)
	{
		if (*head)
		{
			new_node->next = *head;
			(*head)->prev = new_node, *head = new_node;
		}
		else
			*head = new_node;
		return (new_node);
	}
	count = 1, temp = (*head)->next;
	while (temp)
	{
		if (idx == count)
		{
			temp->prev->next = new_node, new_node->prev = temp->prev;
			new_node->next = temp, temp->prev = new_node;
			return (new_node);
		}
		count++;
		tmp_prev = temp;
		temp = temp->next;
	}
	if (temp == NULL && count == idx)
	{
		tmp_prev->next = new_node, new_node->prev = tmp_prev;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}

