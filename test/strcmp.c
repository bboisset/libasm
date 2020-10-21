int strcmp(const char *s1, const char *s2);

int main(void)
{
	char *str1 = "test";
	char *str2 = "test";
	char *str3 = "";
	

	int resO = strcmp(str1, str2);
	int res1 = ft_strcmp(str1, str2);
	

	printf("Original : %i | FT : %i\n", resO, res1);
}
