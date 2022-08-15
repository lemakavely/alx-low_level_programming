#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees linked list malloced memory space then sett head to null
 * @head: to free
 *
 * Return: none
 */

void free_listint2(listint_t **head)
{
	listint_t *temp, *next = *head;

	while (next)
	{
		temp = next->next;
		free(next);
		next = temp;
	}
	*head = NULL;
}
