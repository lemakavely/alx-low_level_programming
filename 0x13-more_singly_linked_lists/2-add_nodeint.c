#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - adds a node to a linked list
 * @head: current head node pointer
 * @n: integer for the linked list
 *
 * Return: address of the new element or null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_head;

	new_head = malloc(sizeof(listint_t));
	if (new_head == NULL)
		return (NULL);
	new_head->n = n;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
