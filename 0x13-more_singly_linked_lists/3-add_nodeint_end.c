#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a linked list
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *prevnode;

	(void)prevnode;

	newnode = malloc(sizeof(listint_t));

	while (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	prevnode = *head;
	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (prevnode->next != NULL)
		{
			prevnode = prevnode->next;
		}
		prevnode->next = newnode;
	}

	return (*head);
}
