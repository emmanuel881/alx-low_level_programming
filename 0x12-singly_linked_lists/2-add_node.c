#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a node at the begining of a linked list
 * @head: double pointer to the link list
 * @str: string to update on the new node
 *
 * Return: a pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int leng;

	leng = 0;
	while (str[leng])
	{
		leng++;
	}

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = leng;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
