#include "lists.h"
#include <stdio.h>

/**
 * looped_listint_len - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
			nodes++;
			tortoise = tortoise->next;
			hare = hare->next;
			}

			while (tortoise != hare)
			{
			nodes++;
			tortoise = tortoise->next;
			}

			return (nodes);
		}

		tortoise = tortoise->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely, handling loops.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	/* If the list is not looped, print all nodes */
	if (nodes == 0)
	{
		while (head != NULL)
		{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
		}
	}
	else
	{
/* If the list is looped, print nodes until the loop starts */
		while (index < nodes)
		{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		index++;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

