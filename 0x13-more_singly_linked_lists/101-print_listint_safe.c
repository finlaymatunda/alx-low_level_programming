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
	size_t nnodes = 0;
	listp_t *head_ptr, *nodenew, *nodeadd;

	head_ptr = NULL;
	while (head != NULL)
	{
		nodenew = malloc(sizeof(listp_t));

		if (nodenew == NULL)
			exit(98);

		nodenew->p = (void *)head;
		nodenew->next = head_ptr;
		head_ptr = new;

		nodeadd = head_ptr;

		while (nodeadd->next != NULL)
		{
			nodeadd = nodeadd->next;
			if (head == nodeadd->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&head_ptr);
				return (nnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}

	free_listp(&head_ptr);
	return (nnodes);
}
