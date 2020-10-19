section	.text
	global	ft_strcpy ; int	strcpy(char* dest, const char *src)
	ft_strcpy:
		xor	rcx, rcx ; i = 0
		cmp rsi, 0 ; check src not null
		je .end
		.loop
			mov	dl, BYTE [rsi + rcx] ; take value of first byte in the char	
			mov BYTE [rdi + rcx], dl ; assign value to rdi
			cmp	dl, 0
			jz	.end
			inc rcx
			jmp .loop
		.end
			mov rax, rdi
			ret
