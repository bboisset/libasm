#include "libasm.h"

void check_strlen()
{
	char *empty_string = "";
	char *string = "string test";
	char *random = "8dwMCnogfD qd\nwq2331d";
	
	printf("\n----------------------\n");
	printf("-------FT_STRLEN------\n");
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

int main(void)
{
	check_strlen();
}
