#include "main.h"
/**
 * swap_int - swap values
 * @a: first pointer
 * @b: second pointer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
