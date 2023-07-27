section .data
	hello db "Hello, Holberton", 0
	format db "%s", 10, 0

section .text
	extern printf

global main

main:
	push rbp
	mov rbp, rsp

	lea rdi, [format]
	lea rsi, [hello]
	call printf

	mov rsp, rbp
	pop rb
	ret
