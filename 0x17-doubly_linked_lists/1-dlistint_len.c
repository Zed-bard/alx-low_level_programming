#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *z)
{
	int count;

	count = 0;

	if (z == NULL)
		return (count);

	while (z->prev != NULL)
		z = z->prev;

	while (z != NULL)
	{
		count++;
		z = z->next;
	}

	return (count);
}

