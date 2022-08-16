#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * reverse_listint - reverse given linked list
 * @head: head node of linked list
 *
 * Return: the address of the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp, *next_node;

	if (head == NULL)
		return (NULL);
	next_node = (*head)->next;
	while (next_node != NULL)
	{
		tmp = next_node->next;
		if (tmp != NULL)
		{
			next_node->next = *head;
			*head = (*head)->next;
			next_node = tmp;
		}
		else
		{
			tmp = *head;
		}
	}
	*head = next_node;
	return (*head);
}
