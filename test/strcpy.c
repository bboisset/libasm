int	ft_strcpy(char *dst, const char *src);

int main(void)
{
	char *src = "test";
	char *dst;

	dst = malloc(10 * sizeof(char) );

	ft_strcpy(dst, src);
	printf("test == %s", dst);
	return (0);
}
