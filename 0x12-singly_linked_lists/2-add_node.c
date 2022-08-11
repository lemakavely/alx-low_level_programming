#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to a linked list
 * @head: current head node pointer
 * @str: data for the linked list
 *
 * Return: address of the new element or null
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;
	unsigned int i = 0;

	if (!str)
		return (NULL);
	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);
	while (str[i])
		i++;
	new_head->str = strdup(str);
	if (!(new_head->str))
	{
		free(new_head);
		return (NULL);
	}
	new_head->len = i;
	new_head->next = *head;
	*head = new_head;
	return (new_head);
}
