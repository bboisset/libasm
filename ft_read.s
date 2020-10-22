section .text
	global ft_read ; ssize_t read(int fd, void *buf, size_t count)

ft_read:
		mov rax, 0 ; 0 is the value for sycall read
		syscall ; fd, buff and count are default initalize by call
		jc	exit_error ; if syscall fail
		ret

exit_error:
	mov rax, -1
	ret