section	.text
	global	ft_write ; ssize_t 	write(int fd, cont void *buf, size_t count)
	ft_write:
		mov rcx, rdx	; save count value in other register
		mov rax, 1		; 1 is the value of syscall write
		syscall
		jc exit_error	; on syscall error jump to exit_error
		mov rax, rdx	; return save count in rax for function return
		ret

exit_error:
	mov	rax, -1
	ret
