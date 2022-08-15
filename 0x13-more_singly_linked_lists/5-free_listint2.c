#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees linked list memory space then sett head to null
 * @head: to free
 *
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
