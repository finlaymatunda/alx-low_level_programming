#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: head of a list.
 *
 * Return: Returns: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *forth, *back;

	if (head == NULL || *head == NULL)
		return (NULL);

	back  = NULL;

	while ((*head)->next != NULL)
	{
		forth = (*head)->next;
		(*head)->next = back;
		back = *head;
		*head = forth;
	}

	(*head)->next = back;

	return (*head);
}
