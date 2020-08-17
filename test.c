#include <stdio.h>
#include <fcntl.h>

//void	ft_write(int fd, const void *buf, size_t count);
int		ft_strcmp (const char *s1, const char *s2);

int main() {
	int fd;
	char *s1 = "cest";
	char *s2 = "abcd";
	printf("ft %i | original %i \n",ft_strcmp(s1,s2), strcmp(s1,s2));
	printf("%s | %s\n",s1, s2);
	/*printf("ft %i | original %i \n",ft_strcmp(s1,s2), strcmp(s1,s2));
	printf("ft %i | original %i \n",ft_strcmp(s1,s2), strcmp(s1,s2));
	printf("ft %i | original %i \n",ft_strcmp(s1,s2), strcmp(s1,s2));
	printf("ft %i | original %i \n",ft_strcmp(s1,s2), strcmp(s1,s2));*/

	return 0;
}
