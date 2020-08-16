section .rodata
	msg: db 'Hello World', 10
	msglen: equ $-msg

section	.text
	global _start

	_start
		; write a message in fd 1 with msg string of msg len
		mov	rdi, 1
		mov	rsi, msg
		mov	rdx, msglen
		mov	rax, 1
		syscall
		; exit the program
		mov rdi, 0
		mov rax, 60
		syscall
