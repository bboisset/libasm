section	.text
	global	ft_strlen
	
ft_strlen:
	mov	rax, 0 ; initalize count at 0

loop_count:
	cmp	BYTE [rdi + rax], 0 ; if str[rax] == 0 exit program
	je	exit
	inc	rax ; increment count
	jmp	loop_count

exit:
	ret	; exit program
