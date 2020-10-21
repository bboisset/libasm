section	.text
	global	ft_write ; ssize_t 	write(int fd, cont void *buf, size_t count)
	ft_write:
		mov rax, 1
		syscall
		jc exit_error
		ret

exit_error:
	mov	rax, -1
	ret
