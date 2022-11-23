#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - prints to  standard error
 *
 * Return: 0
 */
int main(void)
{
	char m[60] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(STDOUT_FILENO, m, 59);
	return (1);
}
