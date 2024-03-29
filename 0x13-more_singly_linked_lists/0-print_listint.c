#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_listint - prints content of linked list
 * @h: head node of linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *temp;
	unsigned int i = 0;

	temp = h;
	if (temp == NULL)
		printf("(nil)");
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		i++;
		temp = temp->next;
	}
	return (i);
}
