#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 *
 * Return: the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *noda;
	listint_t *prevnode;

	noda = head;
	prevnode = head;
	while (head && noda && noda->next)
	{
		head = head->next;
		noda = noda->next->next;

		if (head == noda)
		{
			head = prevnode;
			prevnode =  noda;
			while (1)
			{
				noda = prevnode;
				while (noda->next != head && noda->next != prevnode)
				{
					noda = noda->next;
				}
				if (noda->next == head)
					break;

				head = head->next;
			}
			return (noda->next);
		}
	}

	return (NULL);
}
