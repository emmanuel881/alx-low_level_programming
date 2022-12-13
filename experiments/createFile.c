#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
	int fd;//holds the process ID

	fd = open("myfile.txt", O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
	{
		printf("failed to create the file\n");
		exit(1);
	}

	write(fd, "hello world\n", 13);


	close(fd);

	return (0);
}
