section	.text
	global	ft_write
	ft_write:
		mov	rdi, 1
		mov	rax, 1
		syscall
		mov	rax, 0
		ret
