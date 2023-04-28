SECTION .data		;initialized DATA

msg: db "Hello, Holbrton\n"

SECTION .text		;asm code

extern printf
global main

main:
	push ebp
	mov ebp, esp


	push msg
	call printf



	mov esp, ebp
	pop ebp
	ret
