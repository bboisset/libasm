section .text
    global my_bzero
    my_bzero:
    .loop:
        ; rsi--
        dec rsi
        ; if (rsi < 0) return
        cmp rsi, 0
        jl .ret
        ; rdi[rsi] = 0
        mov byte [rdi+rsi], 0
        jmp .loop
    .ret:
        ret
