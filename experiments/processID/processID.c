#include <stdio.h>
#include <unistd.h>
/**
 * main - PID
 *
 * Return: 0
 */
int main()
{
	pid_t pid;

	pid = getpid();
	printf("%u\n", pid);
	
	return (0);
}
