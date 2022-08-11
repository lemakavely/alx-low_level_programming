#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node to a linked list at the end
 * @head: current head node pointer
 * @str: data for the linked list
 *
 * Return: address of the new element or null
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	unsigned int i = 0;

	if (!str)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[i])
		i++;
	new->str = strdup(str);
	if (!(new->str))
	{
		free(new);
		return (NULL);
	}
	new->len = i;
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (new);
}
