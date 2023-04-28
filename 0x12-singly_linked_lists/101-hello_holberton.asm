global main
extern printf

SECTION .text		;asm code

main:
	mov edi, msg
	xor eax, eax
	call printf
	mov eax, 0
	ret

SECTION .data		;initialized DATA

msg: db `Hello, Holbrton\n`,0
