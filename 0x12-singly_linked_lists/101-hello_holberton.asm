SECTION .text

extern printf
global main


main:
	move edi, msg
	xor eax, eax
	call printf

	mov eax, 0
	ret

msg: db `Hello, Holbrton\n`, 0
