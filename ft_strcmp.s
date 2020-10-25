section	.text
	global	ft_strcmp ; int	strcmp(const char* s1, const char *s2)

ft_strcmp:
		mov rax, 0
		jmp compare

compare:
		mov	al, byte [rdi]	; take value of first byte in the char
		mov	bl, byte [rsi]	; take value of first byte in the char
		cmp	al, 0 
		je	end
		cmp	bl, 0
		je	end
		cmp	al, bl
		jne	end
		inc rdi
		inc rsi
		jmp compare
end:
		movzx	rax, al		; copy content to dest with 0 extend
		movzx	rbx, bl		; copy content to dest with 0 extend
		sub		rax, rbx	; save the difference between rax and rbx
		ret
