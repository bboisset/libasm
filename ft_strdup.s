section .text
	global ft_strdup ; char *strdup(const char *s)
	extern malloc
	extern ft_strlen
	extern ft_strcpy

ft_strdup:
		call ft_strlen
		inc rax ; add one for '\0' char
		push rdi ; save string in stack
		mov rdi, rax ; set len to allocate
		call malloc ; rax is the argument
		;jz end ; if malloc fail return
		pop r9 ; get back string froms stack
		mov rdi, rax ; move pointer string to dest arg
		mov rsi, r9 ; move string in second src arg
		call ft_strcpy
		ret
