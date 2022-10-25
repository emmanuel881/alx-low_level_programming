#include "main.h"
/**
 * _strlen - find string length
 * @s: a pointer passes
 * @count: count values
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + 1) != NULL)
	{
		count++;
	}
	return (count);
}
