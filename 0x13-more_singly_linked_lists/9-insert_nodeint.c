#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - insert node at an index into linked list
 * @head: head node of linked list
 * @idx: index of the node to add
 * @n: data for the new lis member
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *next, *new, *tmp;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	new->n = n;
	tmp = *head;
	next = *head;
	for (i = 0; i < idx && tmp; i++)
	{
		next = tmp;
		tmp = tmp->next;
	}
	if (i == 0)
	{
		new->next = next;
		*head = new;
	}
	else if (idx > i)
		return (NULL);
	else if (next->next == NULL)
	{
		next->next = new;
		new->next = NULL;
		tmp = new;
	}
	else
	{
		next->next = new;
		new->next = tmp;
	}
	return (new);
}
