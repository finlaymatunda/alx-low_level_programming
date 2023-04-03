#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
 /**
  * print_listint - Prints all the elements of a listint_t list.
  * @h: head of a list.
  *
  * Return: the number of nodes
  */
size_t print_listint(const listint_t *h)
{

	size_t number_nodes = 0;

	while (h != NULL)
	{
	number_nodes++;
	printf("%d\n", h->n);
	h = h->next;
	}
	return (number_nodes);
}
