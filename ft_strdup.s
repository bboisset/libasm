section .text
	global ft_strdup ; char *strdup(const char *s)
	extern _malloc
	extern _ft_strlen
	extern _ft_strcpy

ft_strdup:
		call _ft_strlen
		mov rcx, rdi ; save string in other register
		inc rax ; add one for '\0' char
		mov rdi, rax ; set len to allocate
		call _malloc ; rax is the argument
		;jz end ; if malloc fail return
		mov rdi, rax ; move allocated string to rdi
		mov rsi, rcx
		call _ft_strcpy
		jmp end
		
end:
		ret
