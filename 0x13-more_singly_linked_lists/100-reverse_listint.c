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
	next_node = *head;
	tmp = *head;
	(*head)->next = NULL;
	while (next_node != NULL)
	{
		if (next_node->next != NULL)
		{
			next_node->next = tmp;
			tmp = tmp->next;
			next_node = next_node->next;
		}
		else
		{
			next_node->next = tmp;
			*head = next_node;
		}
	}
	return (*head);
}
