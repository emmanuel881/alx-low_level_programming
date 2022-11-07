#include <stdio.h>
/**
 * main - prints first argument
 * @argc: number of arguments
 * @argv: string of arguments
 *
 * Return: 0
 */
int main(int argc, char *agrv[])
{
	printf("%s\n", agrv[0]);
	(void)argc;
	return (0);
}
