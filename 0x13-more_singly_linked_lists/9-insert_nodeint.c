#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is to be inserted (starting from 0)
 * @n: data to be inserted in the new node
 *
 * Return: pointer to the new node if successful, NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t)); /* Allocate memory for the new node */
	if (!new || !head)
		return (NULL);

	new->n = n;/* Set the data of the new node to n */
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;/* Update the head pointer to point to the new node */
		return (new);/* Return the new node */
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)/* Check if we are at the  desired index node */
		{
		new->next = temp->next;
		temp->next = new;
		return (new);
		}
		else
		temp = temp->next;
	}

	return (NULL);
}
