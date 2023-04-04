#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t number_nodes 0;

	while (h != NULL)
	{
		h = h->next;
		number_nodes++;
	}

	return (number_nodes);
}
