	extern malloc
	extern ft_strlen
	extern ft_strcpy

section .text
	global ft_strdup ; char *strdup(const char *s)
	ft_strdup:
		mov rx, rdi ; save string in other register
		call ft_strlen
		inc rax ; add one for '\0' char
		call malloc ; rax is the argument
		
