#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int	 	main(void)
{
	int fd;

	fd = open("test.txt", O_CREAT|O_WRONLY, 0777);
	write(0,"string", 6);
	write(fd, "string", 6);

	return (0);
}
