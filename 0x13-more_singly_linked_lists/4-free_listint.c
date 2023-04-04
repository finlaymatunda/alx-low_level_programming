#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: head of a list.
 *
 * Return : Not specified
 */
void free_listint2(listint_t *head)
{
        listint_t *linkednode;

        while (head != NULL)
        {
               head = linkednode
	       	head = head->next;
                free(linkednode);
        }
}
