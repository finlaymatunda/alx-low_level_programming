#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: head of a list.
 *
 * Return : Not specified
 */
void free_listint2(listint_t **head)
{
	listint_t *linked_list;

	while (head)
	{
		linked_list = head->next;
		free(head);
		head = linked_list;
	}
}
