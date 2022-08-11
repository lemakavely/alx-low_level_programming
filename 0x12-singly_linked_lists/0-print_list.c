#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints content of linked list
 * @h: head node of linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		i++;
		h = h->next;
	}
	return (i);
}
