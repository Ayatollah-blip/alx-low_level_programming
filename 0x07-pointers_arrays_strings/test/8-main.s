	.arch armv8-a
	.file	"8-main.c"
	.text
	.align	2
	.global	main
	.type	main, %function
main:
.LFB0:
	.cfi_startproc
	stp	x29, x30, [sp, -160]!
	.cfi_def_cfa_offset 160
	.cfi_offset 29, -160
	.cfi_offset 30, -152
	mov	x29, sp
	adrp	x0, .LC0
	add	x1, x0, :lo12:.LC0
	add	x0, sp, 120
	ldp	x2, x3, [x1]
	stp	x2, x3, [x0]
	ldp	x2, x3, [x1, 16]
	stp	x2, x3, [x0, 16]
	ldr	w1, [x1, 32]
	str	w1, [x0, 32]
	adrp	x0, .LC1
	add	x1, x0, :lo12:.LC1
	add	x0, sp, 16
	ldp	x2, x3, [x1]
	stp	x2, x3, [x0]
	ldp	x2, x3, [x1, 16]
	stp	x2, x3, [x0, 16]
	ldp	x2, x3, [x1, 32]
	stp	x2, x3, [x0, 32]
	ldp	x2, x3, [x1, 48]
	stp	x2, x3, [x0, 48]
	ldp	x2, x3, [x1, 64]
	stp	x2, x3, [x0, 64]
	ldp	x2, x3, [x1, 80]
	stp	x2, x3, [x0, 80]
	ldr	w1, [x1, 96]
	str	w1, [x0, 96]
	add	x0, sp, 120
	mov	w1, 3
	bl	print_diagsums
	add	x0, sp, 16
	mov	w1, 5
	bl	print_diagsums
	mov	w0, 0
	ldp	x29, x30, [sp], 160
	.cfi_restore 30
	.cfi_restore 29
	.cfi_def_cfa_offset 0
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.section	.rodata
	.align	3
.LC0:
	.word	0
	.word	1
	.word	5
	.word	10
	.word	11
	.word	12
	.word	1000
	.word	101
	.word	102
	.align	3
.LC1:
	.word	0
	.word	1
	.word	5
	.word	12124
	.word	1234
	.word	10
	.word	11
	.word	12
	.word	123521
	.word	12512
	.word	1000
	.word	101
	.word	102
	.word	12545
	.word	214543435
	.word	100
	.word	1012451
	.word	11102
	.word	12545
	.word	214543435
	.word	10
	.word	12401
	.word	10452
	.word	11542545
	.word	1214543435
	.text
	.ident	"GCC: (Debian 10.2.1-6) 10.2.1 20210110"
	.section	.note.GNU-stack,"",@progbits
