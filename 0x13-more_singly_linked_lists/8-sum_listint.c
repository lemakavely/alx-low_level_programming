#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - adds all n of the nodes from a linked list
 * @head: current head node pointer
 *
 * Return:sum of n n or 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += (head)->n;
		head = (head)->next;
	}
	return (sum);
}
