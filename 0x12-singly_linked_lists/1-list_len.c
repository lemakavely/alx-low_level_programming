#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - return number of members in list
 * @h: head node of linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int i = 0;

	temp = h;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
