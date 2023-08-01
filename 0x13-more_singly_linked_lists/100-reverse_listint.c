#include "lists.h"

/**
 * reverse_listint - Reverses  linked list
 * @head: pointer to the First node in the list
 *
 * Return: a pointer to the first node of the reversed linked list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;
/* Q: How can we reverse a linked list without using more than 1 loop */
	while (*head)
	{
	next = (*head)->next;/*stores the next node's address in the next variable */
	(*head)->next = prev;
	prev = *head;
	*head = next;
	}

	*head = prev;

	return (*head);
}

