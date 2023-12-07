#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *z1;
	dlistint_t *z2;
	unsigned int i;

	z1 = *head;

	if (z1 != NULL)
		while (z1->prev != NULL)
			z1 = z1->prev;

	i = 0;

	while (z1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = z1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				z2->next = z1->next;

				if (z1->next != NULL)
					z1->next->prev = z2;
			}

			free(z1);
			return (1);
		}
		z2 = z1;
		z1 = z1->next;
		i++;
	}

	return (-1);
}

