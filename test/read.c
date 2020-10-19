#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t ft_read(int fd, void *buf, size_t count);

int main(void)
{
	int 	fd;
	char 	*buf;
	ssize_t res;

	res = 1;
	buf = malloc(11 * sizeof(char));
	fd = open("test.txt", O_CREAT, 0777);
	res = ft_read(fd, buf, 10);
	printf("res %zi \n", res);
	buf[res] = '\0';
	printf("inside file :  %s", buf);
}
