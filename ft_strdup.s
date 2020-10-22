section .text
	global ft_strdup ; char *strdup(const char *s)
	extern malloc
	extern ft_strlen
	extern ft_strcpy

ft_strdup:
		mov rdx, rdi ; save string in other register
		call ft_strlen
		inc rdi ; add one for '\0' char | rdi is the nb of bytes to allocate
		call malloc ; rax is the argument
		jz end ; if malloc fail return
		mov rdi, rax ;
		mov rsi, rdx
		call ft_strcpy
		
end:
		ret
