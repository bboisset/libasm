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
