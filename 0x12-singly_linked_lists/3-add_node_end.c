#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node_end - adds a node to the end of linked list
 * @head: pointer to the first item of the list
 * @str: data to input
 *
 * Return: pointer to the last item on a list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *ptr;

	ptr = *head;
	temp = malloc(sizeof(list_t));
	if (!temp)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = temp;

	return (ptr);
}
