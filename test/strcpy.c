int	ft_strcpy(char *dst, const char *src);

int main(void)
{
	char *src = "test";
	char *dst = "abcdefgh";

	printf("length affected %i\n",ft_strcpy(dst, src));
	printf("test == %s", dst);
	return (0);
}
