	.arch armv8-a
	.file	"8-print_diagsums.c"
	.text
	.section	.rodata
	.align	3
.LC0:
	.string	"%d, %d\n"
	.text
	.align	2
	.global	print_diagsums
	.type	print_diagsums, %function
print_diagsums:
.LFB0:
	.cfi_startproc
	stp	x29, x30, [sp, -48]!
	.cfi_def_cfa_offset 48
	.cfi_offset 29, -48
	.cfi_offset 30, -40
	mov	x29, sp
	str	x0, [sp, 24]
	str	w1, [sp, 20]
	str	wzr, [sp, 36]
	str	wzr, [sp, 32]
	str	wzr, [sp, 40]
	b	.L2
.L3:
	ldr	w1, [sp, 40]
	ldr	w0, [sp, 20]
	mul	w1, w1, w0
	ldr	w0, [sp, 40]
	add	w0, w1, w0
	sxtw	x0, w0
	lsl	x0, x0, 2
	ldr	x1, [sp, 24]
	add	x0, x1, x0
	ldr	w0, [x0]
	ldr	w1, [sp, 36]
	add	w0, w1, w0
	str	w0, [sp, 36]
	ldr	w0, [sp, 40]
	add	w0, w0, 1
	str	w0, [sp, 40]
.L2:
	ldr	w1, [sp, 40]
	ldr	w0, [sp, 20]
	cmp	w1, w0
	blt	.L3
	ldr	w0, [sp, 20]
	sub	w0, w0, #1
	str	w0, [sp, 44]
	b	.L4
.L5:
	ldr	w1, [sp, 44]
	ldr	w0, [sp, 20]
	mul	w1, w1, w0
	ldr	w2, [sp, 20]
	ldr	w0, [sp, 44]
	sub	w0, w2, w0
	sub	w0, w0, #1
	add	w0, w1, w0
	sxtw	x0, w0
	lsl	x0, x0, 2
	ldr	x1, [sp, 24]
	add	x0, x1, x0
	ldr	w0, [x0]
	ldr	w1, [sp, 32]
	add	w0, w1, w0
	str	w0, [sp, 32]
	ldr	w0, [sp, 44]
	sub	w0, w0, #1
	str	w0, [sp, 44]
.L4:
	ldr	w0, [sp, 44]
	cmp	w0, 0
	bge	.L5
	ldr	w2, [sp, 32]
	ldr	w1, [sp, 36]
	adrp	x0, .LC0
	add	x0, x0, :lo12:.LC0
	bl	printf
	nop
	ldp	x29, x30, [sp], 48
	.cfi_restore 30
	.cfi_restore 29
	.cfi_def_cfa_offset 0
	ret
	.cfi_endproc
.LFE0:
	.size	print_diagsums, .-print_diagsums
	.ident	"GCC: (Debian 10.2.1-6) 10.2.1 20210110"
	.section	.note.GNU-stack,"",@progbits
