#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: head of a list.
 *
 * Return: if the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	int head_node;
	listint_t *currn;

	if (*head == NULL)
		return (0);

	currn = *head;

	head_node = currn->n;

	*head = currn->next;

	free(currn);


	return (head_node);
}
