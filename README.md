# Libasm *In Progress*


## How To Compile
```shell
nasm -f elf64 *.s 
gcc *.c s_file.o -o name_of_program
```
## Project advancement

Function Name | Code | test | unit_test
------------- | ---- | ---- | ---------
ft_write.s | :x: | :stopwatch: | :x:
ft_strlen.s | :white_check_mark: | :white_check_mark: | :x:
ft_strcpy.s | :white_check_mark: | :white_check_mark: | :x:
ft_strcmp.s | :white_check_mark: | :white_check_mark: | :x:
ft_read.s | :white_check_mark: | :stopwatch: | :x:
ft_strdup.s | :x: | :stopwatch: | :x:

## Better understand assembly language

Name | Description | Exemple | Exemple description
---- | ----------- | ------- | -------------------
mov | Use to move value to a register | mov rax, 42 | rax register will get 42 value
rax | Use to return value from asm function (max 64 bits) | mov rax, 42 | The function will return 42
rdi | Where first argument of function is saved | 
rsi | Where the second argument of function is saved | 
rdx | Where the third argument of function is saved | 
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
JE | Jump to label if == | JE .start
JNE | Jump to label if != | JNE .start
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

## Usefull Sources
[Linux Sycall](https://blog.rchapman.org/posts/Linux_System_Call_Table_for_x86_64/)

[Malloc Usage](https://stackoverflow.com/questions/59697603/how-to-use-malloc-in-asm)
