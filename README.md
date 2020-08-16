# Libasm


## How To Compile
```shell
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

*The first 6 arguments of a Functions are saved respectively in rdi, rsi, rdx, rcx, r8, r9*
### Controle Instruction

In assembly language the only way to make a loop as a while or a for. Is to jump to a label
```assembly
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

### Math Operation
Name | Description | Exemple | C equivalent
---- | ----------- | ------- | -------------------
dec | Decrement value by 1 | dec rsi | rsi--;
inc | Increment value by 1 | inc rsi | rsi++;
add | Add two values | add rsi, 4 | rsi += 4;
sub | substrat two values | sub rsi, 4 | rsi -= 4;
mul | multiplicate two values with unsigned integer | mul rsi, 4 | rsi *= 4;
imul | multiplicate two values with signed integer | imul rsi, 4 | rsi *= 4;
div | divide two values with unsigned integer | div rsi, 4 | rsi /= 4;
idiv | divide two values with signed integer | idiv rsi, 4 | rsi /= 4;
cmp | compare two values | cmp rsi, 4 |
