#include "lists.h"
/**
 * sum_dlistint - returns the sum
 * @head: pointer to head
 * Return: sum of nodes or 0
 */
int sum_dlistint(dlistint_t *head)
{
	long int sum;
	dlistint_t *temp;

	sum = 0;
	if (head == NULL)
		return (sum);

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

