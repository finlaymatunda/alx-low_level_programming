#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * of a linked list.
 * @head: head of a list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prevnode = *head;
	unsigned int noded;

	if (prevnode == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(prevnode);
		return (1);
	}

	for (noded = 0; noded < (index - 1); noded++)
	{
		if (prevnode->next == NULL)
			return (-1);

		prevnode = prevnode->next;
	}

	temp = prevnode->next;
	prevnode->next = temp->next;
	free(temp);
	return (1);
}
