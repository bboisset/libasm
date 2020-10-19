section	.text
	global	ft_strcpy ; int	strcpy(char* dest, const char *src)
	ft_strcpy:
		mov rax, 0
		mov	rdx, 0
		mov byte [rdi+rdx], 0
		.loop
			mov	bl, byte [rsi] ; take value of last byte in the char	
			;mov byte [rdi+rdx], 0
			cmp	bl, 0
			je	.end
			inc rsi
			inc rdx
			jmp .loop
		.end
			mov rax, rdx
			ret
