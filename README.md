# Libasm


## How To Compile
```
nasm -f elf64 *.s 
gcc *.c s_file.o -o name_of_program
```

## Better understand assembly language

Name | Description | Exemple | Exemple description
---- | ----------- | ------- | -------------------
rax | use to return value from asm function | mov rax, 42 | the function will return 42
