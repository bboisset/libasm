section	.text
	global	ft_write ; ssize_t 	write(int fd, cont void *buf, size_t count)

ft_write:
		mov rax, 1		; 1 is the value of syscall write
		syscall ; write return length read of -1 if error
		cmp	rax, 0
		jl exit_error	; if syscall return value less than 0
		ret

exit_error:
	mov	rax, -1
	ret
