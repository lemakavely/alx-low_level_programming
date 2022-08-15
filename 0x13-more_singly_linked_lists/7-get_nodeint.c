#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * get_nodeint_at_index - get node at an index from linked list
 * @head: head node of linked list
 * @index: index of the node to find
 *
 * Return: the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp, *next;
	unsigned int i = 0;

	temp = head;
	next = head;
	for (i = 0; i <= index && temp; i++)
	{
		next = temp;
		temp = temp->next;
	}
	if (i < index)
		return (NULL);
	return (next);
}
