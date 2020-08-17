section	.text
	global	ft_write ; ssize_t 	write(int fd, cont void *buf, size_t count)
	ft_write:
		mov rax, 1
		syscall
		mov rdi, 0
		mov	rax, 60
		syscall
