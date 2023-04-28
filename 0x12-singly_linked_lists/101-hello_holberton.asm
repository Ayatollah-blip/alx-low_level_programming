global main
extern printf


main:
	mov edi, msg
	xor eax, 0
	call printf
	ret


msg: db "Hello, Holbrton\n", 0
