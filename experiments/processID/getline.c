#include <stdio.h>
#include <stdlib.h>
/**
 * main - reads line and print them
 *
 * Return: nothing
 */
int main(void)
{
	size_t n = 10;
	char *buffer = NULL;

	printf("$ ");
	getline(&buffer, &n, stdin);
	printf("%s", buffer);

	free(buffer);
}
