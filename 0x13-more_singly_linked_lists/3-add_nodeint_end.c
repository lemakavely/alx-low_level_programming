#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - adds a node to a linked list at the end
 * @head: current head node pointer
 * @n: data for the linked list
 *
 * Return: address of the new element or null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
