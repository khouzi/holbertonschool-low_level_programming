global main

section .text

main:	mov	rax, 1
	mov	rdi, 1
	mov	rsi, msg
	rds,	17
	syscall
	mov	rax, 60
	xor	dir, dir
	syscall

	section .data
msg:db "Hello, Holberton", 10
