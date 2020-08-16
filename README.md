# Libasm


## How To Compile
```
nasm -f elf64 *.s 
gcc *.c s_file.o -o name_of_program
```

## Better understand assembly language

Name | Description | Exemple | Exemple description
---- | ----------- | ------- | -------------------
mov | Use to move value to a register | mov rax, 42 | rax register will get 42 value
rax | Use to return value from asm function | mov rax, 42 | The function will return 42
rdi | Where first argument of function is saved | 
ret | Use to end end function | ret | 

### Controle Instruction

In assembly language the only way to make a loop as a while or a for. Is to jump to a label
```
  .loop
    dec rsi ; decrement value of rsi
    cmp rsi, 0 ; if rsi == 0
    jl .ret ; jump to .ret to exit
    
    jmp .loop
  
  .ret
    ret
```

Name | Description | Exemple
---- | ----------- | -------
JE | Jump to label if = | JE .start
JG | Jump to label if > | JG .start
JEG | Jump to label if >= | JEG .start
JNGA | Jump if != OR !> | JNGA .start
JL | Jump if < | JL .start
JMP | Junp to label without condition | JMP .start
