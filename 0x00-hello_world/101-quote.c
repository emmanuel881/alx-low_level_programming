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
	char mes[60];

	mes = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(STDOUT_FILENO, mes, 59);
	return (1);
}
