#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: head of a list.
 *
 * Return : Not specified
 */
void free_listint(listint_t *head)
{
	listint_t *tmpn;

	while ((tmpn = head) != NULL)
	{
		head = head->next;
		free(tmpn);
	}
}
