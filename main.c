#include "libasm.h"

void	check_strlen()
{
	char *empty_string = "";
	char *string = "string test";
	char *random = "8dwMCnogfD qd\nwq2331d";
	
	printf("\n----------------------\n");
	printf("------ FT_STRLEN -----\n");
	printf("----------------------\n\n");
	printf("length expected for '' : 0\n");
	printf("strlen : %zu\n", strlen(empty_string));
	printf("ft_strlen : %zu\n", ft_strlen(empty_string));
	printf("\n");
	printf("length expected for 'string test' : 11\n");
	printf("strlen : %zu\n", strlen(string));
	printf("ft_strlen : %zu\n", ft_strlen(string));
	printf("\n");
	printf("length expected for '8dwMCnogfD qd\\nwq2331d' 21\n");
	printf("strlen : %zu\n", strlen(random));
	printf("ft_strlen : %zu\n", ft_strlen(random));
}

void	clear_dest(char *dest, int len)
{
	free(dest);
	dest = malloc(len * sizeof(char));
}

void	check_strcpy()
{
	char *dest;
	char *empty_string = "";
	char *string = "string test";
	char *random = "8dwMCnogfD qd\nwq2331d";

	dest = malloc(30 * sizeof(char));
	printf("\n----------------------\n");
	printf("------ FT_STRCPY -----\n");
	printf("----------------------\n\n");
	printf("test for ''\n");
	printf("strcpy : %s\n", strcpy(dest, empty_string));
	clear_dest(dest, 30);
	printf("ft_strcpy : %s\n", ft_strcpy(dest, empty_string));
	clear_dest(dest, 30);
	printf("\n");

	printf("test for 'string test'\n");
	printf("strcpy : %s\n", strcpy(dest, string));
	clear_dest(dest, 30);
	printf("ft_strcpy : %s\n", ft_strcpy(dest, string));
	clear_dest(dest, 30);
	printf("\n");

	printf("test for '8dwMCnogfD qd\\nwq2331d'\n");
	printf("strcpy : %s\n", strcpy(dest, random));
	clear_dest(dest, 30);
	printf("ft_strcpy : %s\n", ft_strcpy(dest, random));
	clear_dest(dest, 30);
	printf("\n");

	free(dest);
}

void	check_strcmp()
{
	char *empty_string = "";
	char *str1 = "Hello World";
	char *str2 = "Hello";

	printf("\n----------------------\n");
	printf("------ FT_STRCMP -----\n");
	printf("----------------------\n\n");
	printf("compare '%s' against '%s'\n", empty_string, str1);
	printf("strcmp : %d\n", strcmp(empty_string, str1));
	printf("ft_strcmp : %d\n", ft_strcmp(empty_string, str1));
	printf("\n");
	printf("compare '%s' against '%s'\n", str1, str2);
	printf("strcmp : %d\n", strcmp(str1, str2));
	printf("ft_strcmp : %d\n", ft_strcmp(str1, str2));
	printf("\n");
	printf("compare '%s' against '%s'\n", str2, str2);
	printf("strcmp : %d\n", strcmp(str2, str2));
	printf("ft_strcmp : %d\n", ft_strcmp(str2, str2));
	printf("\n");
}

void	check_write()
{
	char	*str1 = "Hello World\n";
	int 	res1;
	int 	res2;
	int 	fd;
	int		fd2;

	res1 = 0;
	res2 = 0;
	printf("\n---------------------\n");
	printf("------ FT_WRITE -----\n");
	printf("---------------------\n\n");
	printf("two Hello World should appears under this string \n");
	res1 = write(0, str1, 12);
	res2 = ft_write(0, str1, 12);
	printf("write res : %i | ft_write res : %i\n", res1, res2);
	printf("'Hello World' with size 5\n");
	res1 = write(0, str1, 5);
	printf("\n");
	res2 = ft_write(0, str1, 5);
	printf("\n");
	printf("String equal to NULL\n");
	res1 = write(0, NULL, 5);
	printf("\n");
	res2 = ft_write(0, NULL, 5);
	printf("\n");
	printf("write res : %i | ft_write res : %i\n", res1, res2);
	printf("Write file who doesn't exist \n");
	fd = open("not_existing",  O_WRONLY | O_CREAT);
	printf("read res : %zd\n", write(fd, str1, 10));
	printf("errno : %d\n", errno);
	close(fd);
	fd2 = open("not_existing",  O_WRONLY | O_CREAT);
	printf("ft_read res : %zd\n", ft_write(fd2, str1, 10));
	printf("errno : %d\n", errno);
	close(fd2);
	printf("\n");
}

void	check_read()
{
	int fd;
	int ret;
	char *buffer;

	ret = 1;
	fd = open("libasm.h", O_RDONLY);
	buffer = malloc(sizeof(char) * 51);
	printf("\n----------------------\n");
	printf("------- FT_READ ------\n");
	printf("----------------------\n\n");
	printf("Read 50 chars of libasm.h \n");
	ret = read(fd, buffer, 50);
	buffer[ret] = '\0';
	printf("read : %s\n", buffer);
	clear_dest(buffer, 51);
	close(fd);
	fd = open("libasm.h", O_RDONLY);
	ret = ft_read(fd, buffer, 50);
	printf("ft_read : %s\n", buffer);
	close(fd);
	printf("\n");
	printf("Read file who doesn't exist \n");
	fd = open("not_existing", O_RDONLY);
	printf("read res : %zd\n", read(fd, buffer, 10));
	printf("errno : %d\n", errno);
	printf("ft_read res : %zd\n", ft_read(fd, buffer, 10));
	printf("errno : %d\n", errno);
	close(fd);
	printf("\n");
	free(buffer);
}

void	check_strdup()
{
	char *str = "Hello World";
	char *empty_string = "";
	char *dest;
	char *ft_dest;
	printf("\n-----------------------\n");
	printf("------- FT_STRDUP ------\n");
	printf("------------------------\n\n");
	printf("Duplication of '%s'\n", str);
	dest =  strdup(str);
	printf("strdup : %s\n", dest);
	ft_dest = ft_strdup(str);
	printf("ft_strdup : %s\n", ft_dest);
	free(dest);
	free(ft_dest);
	printf("\n");
	printf("Duplication of '%s'\n", empty_string);
	dest =  strdup(empty_string);
	printf("strdup : %s\n", dest);
	ft_dest = ft_strdup(empty_string);
	printf("ft_strdup : %s\n", ft_dest);
	free(dest);
	free(ft_dest);
	printf("\n");
}

int main(void)
{
	check_strlen();
	check_strcpy();
	check_strcmp();
	check_write();
	check_read();
	check_strdup();
	return (0);
}
