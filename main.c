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

void	clear_dest(char *dest)
{
	free(dest);
	dest = malloc(30 * sizeof(char));
}

int		check_strcpy()
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
	clear_dest(dest);
	printf("ft_strcpy : %s\n", ft_strcpy(dest, empty_string));
	clear_dest(dest);
	printf("\n");

	printf("test for 'string test'\n");
	printf("strcpy : %s\n", strcpy(dest, string));
	clear_dest(dest);
	printf("ft_strcpy : %s\n", ft_strcpy(dest, string));
	clear_dest(dest);
	printf("\n");

	printf("test for '8dwMCnogfD qd\\nwq2331d'\n");
	printf("strcpy : %s\n", strcpy(dest, random));
	clear_dest(dest);
	printf("ft_strcpy : %s\n", ft_strcpy(dest, random));
	clear_dest(dest);
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
	char *empty_string = "";
	char *str1 = "Hello World\n";
	int res1;
	int res2;

	res1 = 0;
	res2 = 0;
	printf("\n---------------------\n");
	printf("------ FT_WRITE -----\n");
	printf("---------------------\n\n");
	printf("two Hello World should appears under this string \n");
	res1 = write(0, str1, 12);
	res2 = ft_write(0, str1, 12);
	printf("write res : %i | ft_write res : %i\n", res1, res2);
	printf("'%s' with size 5\n", str1);
	res1 = write(0, str1, 5);
	res2 = ft_write(0, str1, 5);
	printf("write res : %i | ft_write res : %i\n", res1, res2);
}

int main(void)
{
	check_strlen();
	check_strcpy();
	check_strcmp();
	check_write();
}
