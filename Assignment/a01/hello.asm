1 section .data
2 hello: db 'Hello world!',10 ; ’Hello world!’ plus a linefeed character
3 helloLen: equ $-hello ; Length of the ’Hello world!’ string
4
5 section .text
6 global _start
7
8 _start:
9 mov eax,4 ; The system call for write (sys_write)
10 mov ebx,1 ; File descriptor 1 - standard output
11 mov ecx,hello ; Put the offset of hello in ecx
12 mov edx,helloLen ; helloLen is a constant
13 int 80h ; ??
14
15 mov eax,1
16 mov ebx,0