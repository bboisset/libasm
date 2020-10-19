section	.text
	global	ft_strcmp ; int	strcmp(const char* s1, const char *s2)
	ft_strcmp:
		mov rax, 0
		.loop
			mov	al, byte [rdi] ; take value of first byte in the char
			mov	bl, byte [rsi] ; take value of first byte in the char
			cmp	al, 0 
			je	.end
			cmp	bl, 0
			je	.end
			cmp	al, bl
			jne	.end
			inc rdi
			inc rsi
			jmp .loop
		.end
			sub	al, bl ; substrat rdi by rsi
			movzx	rax, al ; move content of operand to source and fill rest with 0
			ret
