#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees linked list malloced memory space
 * @head: to free
 *
 * Return: none
 */

void free_listint(listint_t *head)
{
	listint_t *temp, *next = head;

	while (next)
	{
		temp = next->next;
		free(next);
		next = temp;
	}
}
