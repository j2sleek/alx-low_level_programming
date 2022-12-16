# INTRODUCTION TO C PROGRAMMING
This project aims to introduce the concepts of C programming language.

### Task 0: Preprocessor
Write a script that runs a C file through the preprocessor and save the result into another file. [0-preprocessor](./0-preprocessor)
- The C file name will be saved in the variable $CFILE
- The output should be saved in the file. 

### Task 1: Compiler
Write a script that compiles a C file but does not link. [1-compiler](./1-compiler)
- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .o instead of .c.
- Example: if the C file is main.c, the output file should be main.o

### Task 2: Assembler
Write a script that generates the assembly code of a C code and save it in an output file. [2-assembler](./2-assembler)
- The C file name will be saved in the variable $CFILE
- The output file should be named the same as the C file, but with the extension .s instead of .c.
- Example: if the C file is main.c, the output file should be main.s

### Task 3: Name
Write a script that compiles a C file and creates an executable named cisfun. [3-name](./3-name)
- The C file name will be saved in the variable $CFILE

### Task 4: Hello, puts
Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line. [4-puts.c](./4-puts.c)
- Use the function puts
- You are not allowed to use printf
- Your program should end with the value 0
