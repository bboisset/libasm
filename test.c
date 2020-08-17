#include <stdio.h>
#include <fcntl.h>

void	ft_write(int fd, const void *buf, size_t count);

int main() {
	int fd;

	fd = open("./file.txt", O_APPEND | O_RDWR |  O_CREAT);
   	ft_write(fd, "lol", 3);
   	return 0;
}
