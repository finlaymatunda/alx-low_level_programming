#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *linked_one;
	listp_t *linked_two;

	if (head != NULL)
	{
		linked_two  = *head;
		while ((linked_one = linked_two) != NULL)
		{
			linked_two  = linked_two->next;
			free(linked_one);
		}
		*head = NULL;
	}
}
/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes, indexd = 0;

	nnodes = looped_listint_len(head);

	if (nnodes == 0)
	{
		for (; head != NULL; nnodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (indexd = 0; indexd < nnodes; indexd++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nnodes);
}
