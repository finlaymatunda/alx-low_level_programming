#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: head of a list.
 * @index: index of the node.
 *
 * Return: If the node does not exist - NULL.
 *         Otherwise - the located node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth_node;

	for (nth_node = 0; nth_node < index && head != NULL; nth_node++)
	{
		head = head->next;
	}

	return (head);
}
