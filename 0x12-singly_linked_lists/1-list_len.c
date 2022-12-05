#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints all elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: number of nodes printed
 */

size_t list_len(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		h = h->next;
		s++;
	}
	return (s);
}
