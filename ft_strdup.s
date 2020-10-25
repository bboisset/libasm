section .text
	global ft_strdup ; char *strdup(const char *s)
	extern malloc
	extern ft_strlen
	extern ft_strcpy

ft_strdup:
		call ft_strlen
		push rdi ; save string in stack
		inc rax ; add one for '\0' char
		mov rdi, rax ; set len to allocate
		call malloc ; rax is the argument
		;jz end ; if malloc fail return
		pop r9 ; get back string froms stack
		mov rdi, rax ; move allocated string to rdi
		mov rsi, r9
		call ft_strcpy
		jmp end
		
end:
		ret
