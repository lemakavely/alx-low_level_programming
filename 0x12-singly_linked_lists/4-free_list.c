#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees linked list malloced memory space
 * @head: to free
 *
 * Return: none
 */

void free_list(list_t *head)
{
	list_t *temp, *next = head;

	while (next)
	{
		temp = next->next;
		free(next->str);
		free(next);
		next = temp;
	}
}
