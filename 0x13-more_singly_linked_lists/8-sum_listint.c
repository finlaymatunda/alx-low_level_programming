#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a linked list.
 * @head: head of a list.
 *
 * Return: If the list is empty - 0.
 *         Otherwise - the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sumnode;

	sumnode = 0;
	while (head != NULL)
	{
		sumnode += head->n;
		head = head->next;
	}

	return (sumnode);
}
