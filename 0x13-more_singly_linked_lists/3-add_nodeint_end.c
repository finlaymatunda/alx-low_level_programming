#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end- adds a new node at the end of a listint_t list
 * @head: head of a list
 * @n: n element
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n);
{
listint_t *node_new, *node_last;

	node_new = malloc(sizeof(listint_t));
	if (node_new == NULL)
		return (NULL);

	node_new->n = n;
	node_new->next = NULL;

	if (*head == NULL)
		*head = node_new;

	else
	{
		node_last = *head;
		while (node_last->next != NULL)
			node_last = node_last->next;
		node_last->next = node_new;
	}

	return (*head);
}
