extern printf
global main

section .text
main:
    push rbp
    mov rdi, hello_msg
    xor rax, rax
    call printf
    pop rbp
    ret

section .data
	hello_msg: db "Hello, Holberton", 0xA
