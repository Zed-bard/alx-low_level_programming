#include "lists.h"
/**
 * get_nodeint_at_index - return  node at a certain index in a linked list
 * @head: first node.
 * @index: return indext of the node
 *
 * Return: pointer to the node we are looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;/* Move to the next node */
		i++;
	}

	return (temp ? temp : NULL);/* Return the node at the desired index */
}

