#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * pop_listint - deletes the head node from a linked list
 * @head: current head node pointer
 *
 * Return: head nodes data n or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *new_head;
	int j = (*head)->n;

	if ((*head)->next == NULL)
		return (0);
	new_head = (*head)->next;
	free(*head);
	*head = new_head;
	return (j);
}
