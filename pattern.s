	.file	"pattern.c"
	.text
	.section	.rodata
.LC0:
	.string	"enter no. of row"
.LC1:
	.string	"%d"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	leaq	-20(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movl	$1, -16(%rbp)
	jmp	.L2
.L7:
	movl	$0, -12(%rbp)
	jmp	.L3
.L4:
	movl	$32, %edi
	call	putchar@PLT
	addl	$1, -12(%rbp)
.L3:
	movl	-20(%rbp), %eax
	subl	-16(%rbp), %eax
	cmpl	%eax, -12(%rbp)
	jl	.L4
	movl	$1, -12(%rbp)
	jmp	.L5
.L6:
	movl	$42, %edi
	call	putchar@PLT
	addl	$1, -12(%rbp)
.L5:
	movl	-16(%rbp), %eax
	addl	%eax, %eax
	subl	$1, %eax
	cmpl	%eax, -12(%rbp)
	jle	.L6
	movl	$10, %edi
	call	putchar@PLT
	addl	$1, -16(%rbp)
.L2:
	movl	-20(%rbp), %eax
	cmpl	%eax, -16(%rbp)
	jle	.L7
	movl	-20(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -20(%rbp)
	movl	$1, -16(%rbp)
	jmp	.L8
.L13:
	movl	$1, -12(%rbp)
	jmp	.L9
.L10:
	movl	$32, %edi
	call	putchar@PLT
	addl	$1, -12(%rbp)
.L9:
	movl	-12(%rbp), %eax
	cmpl	-16(%rbp), %eax
	jle	.L10
	movl	$1, -12(%rbp)
	jmp	.L11
.L12:
	movl	$42, %edi
	call	putchar@PLT
	addl	$1, -12(%rbp)
.L11:
	movl	-20(%rbp), %eax
	subl	-16(%rbp), %eax
	addl	%eax, %eax
	addl	$1, %eax
	cmpl	%eax, -12(%rbp)
	jle	.L12
	movl	$10, %edi
	call	putchar@PLT
	addl	$1, -16(%rbp)
.L8:
	movl	-20(%rbp), %eax
	cmpl	%eax, -16(%rbp)
	jle	.L13
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L15
	call	__stack_chk_fail@PLT
.L15:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 7.3.0-27ubuntu1~18.04) 7.3.0"
	.section	.note.GNU-stack,"",@progbits
