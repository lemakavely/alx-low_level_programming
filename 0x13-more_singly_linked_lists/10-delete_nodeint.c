#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - delete node at an index from linked list
 * @head: head node of linked list
 * @index: index of the node to add
 * Return: the address of the new node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *next, *tmp, *bfr;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	for (i = 0; i < index; i++)
	{
		bfr = tmp;
		tmp = tmp->next;
		next = tmp->next;
	}
	if (tmp == NULL)
		return (-1);
	if (i == 0)
		*head = (*head)->next;
	else if (next == NULL)
		bfr->next = NULL;
	else
		bfr->next = next;
	free(tmp);
	return (1);
}
