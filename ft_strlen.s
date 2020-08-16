section	.text
	global	ft_strlen
	ft_strlen:
		mov rcx, -1 ; fix behavior of repne 
		mov	rsi, rdi ; save string
		mov	al, 0
		repne scasb
		sub rdi, rsi ; save strlen
		dec rdi ; -1 length for \0
		mov rax, rdi
		ret
