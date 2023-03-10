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

### Task 5: Hello, printf
Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line. [5-printf.c](./5-printf.c)
- Use the function printf
- You are not allowed to use the function puts
- Your program should return 0
- Your program should compile without warning when using the -Wall gcc option

### Task 6: Size is not grandeur, and territory does not make a nation
Write a C program that prints the size of various types on the computer it is compiled and run on. [6-size.c](./6-size.c)
- You should produce the exact same output as in the example
- Warnings are allowed
- Your program should return 0
- You might have to install the package libc6-dev-i386 on your Linux to test the -m32 gcc option

### Task 7: Intel
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file. [100-intel](./100-intel)
- The C file name will be saved in the variable $CFILE.
- The output file should be named the same as the C file, but with the extension .s instead of .c.
- Example: if the C file is main.c, the output file should be main.s

### Task 8: UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity
Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error. [101-quote.c](./101-quote.c)
- You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts
- Your program should return 1
- Your program should compile without any warnings when using the -Wall gcc option
