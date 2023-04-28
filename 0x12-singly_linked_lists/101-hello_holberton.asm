SECTION .text

extern printf
global main


main:
	push msg
	push msgformat
	call printf
	add rsp, 16

	mov eax, 1
	xor ebx, ebx
	int 0x80

SECTION .data
msg: db "Hello, Holbrton\n", 0
msgformat: db "%s", 0
