#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to head
 * @index: index to delete
 * Return: 1 on success or -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *temp;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp), temp = NULL;
		return (1);
	}
	count = 1, temp = (*head)->next;
	if (temp)
	{
		while (temp->next)
		{
			if (index == count)
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				free(temp), temp = NULL;
				return (1);
			}
			count++, temp = temp->next;
		}
	}
	if (temp && index == count)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}
	return (-1);
}

