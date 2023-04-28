SECTION .data		;initialized DATA

msg: db `Hello, Holbrton\n`,0


global main
extern printf

SECTION .text		;asm code

main:
	push rbp
	mov rbp, rsp
	sub rsp, 16
	mov edi, msg
	xor eax,eax
	call printf
	mov eax, 0

	add rsp, 16
	leave
	ret
