#include "lists.h"

/**
 * sum_listint - calculates the sum of all  data in a listint_t list
 * @head: first node
 *
 * Return: success
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;/* Create a temporary pointer and assign to  head */

	while (temp)
	{
	sum += temp->n;
	temp = temp->next;
	}

	return (sum);/* Return the resulting sum */
}

