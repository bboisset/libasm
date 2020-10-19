#include <stdio.h>
#include <string.h>
size_t ft_strlen(char *str);

int main(void)
{
	printf("original : %lu | ft : %lu \n", strlen("test"), ft_strlen("test"));
	printf("original : %lu | ft : %lu \n", strlen(""), ft_strlen(""));
	printf("original : %lu | ft : %lu \n", strlen("dddd"), ft_strlen("dddd"));
	printf("original : %lu | ft : %lu \n", strlen("bla bla bla bla"), ft_strlen("bla bla bla bla"));
}
