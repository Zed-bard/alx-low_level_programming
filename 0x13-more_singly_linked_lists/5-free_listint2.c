#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)/* Check if the head is NULL */
		return;

	while (*head)/* Loop through the linked list until head is NULL */
	{
		temp = (*head)->next;/* Store the next node's address temporarily */
		free(*head);
		*head = temp;/* Free the current node */
	}

	*head = NULL; /*an empty linked list */
}
