section .text
	global ft_strdup ; char *strdup(const char *s)
	extern malloc
	extern ft_strlen
	extern ft_strcpy

ft_strdup:
		call ft_strlen
		inc rax ; add one for '\0' char
		mov rcx, rdi ; save string in other register
		mov rdi, rax ; set len to allocate
		call malloc ; rax is the argument
		jz end ; if malloc fail return
		mov rdi, rax ; move allocated string to rdi
		mov rsi, rcx
		call ft_strcpy
		jmp end
		
end:
		ret
