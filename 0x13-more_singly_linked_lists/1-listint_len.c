#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * listint_len - return number of members in list
 * @h: head node of linked list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	unsigned int i = 0;

	temp = h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
