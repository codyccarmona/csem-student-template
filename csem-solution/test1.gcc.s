	.file	"test1.c"
	.text
	.globl	m
	.bss
	.align 16
	.type	m, @object
	.size	m, 24
m:
	.zero	24
	.text
	.globl	scale
	.type	scale, @function
scale:
.LFB0:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	cmpl	$0, -20(%rbp)
	jne	.L2
	movl	$0, %eax
	jmp	.L3
.L2:
	movl	$0, -4(%rbp)
	jmp	.L4
.L5:
	movl	-4(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	m(%rip), %rax
	movl	(%rdx,%rax), %eax
	imull	-20(%rbp), %eax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	leaq	m(%rip), %rdx
	movl	%eax, (%rcx,%rdx)
	addl	$1, -4(%rbp)
.L4:
	cmpl	$5, -4(%rbp)
	jle	.L5
	movl	$1, %eax
.L3:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	scale, .-scale
	.section	.rodata
.LC0:
	.string	"m[%d]"
.LC1:
	.string	" = %d\n"
.LC2:
	.string	"scale factor is zero"
	.text
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, m(%rip)
	movl	$1, 4+m(%rip)
	movl	$2, 8+m(%rip)
	movl	$3, 12+m(%rip)
	movl	$4, 16+m(%rip)
	movl	$5, 20+m(%rip)
	movl	$10, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	scale
	testl	%eax, %eax
	je	.L7
	movl	$0, -8(%rbp)
	jmp	.L8
.L9:
	movl	-8(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-8(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	leaq	m(%rip), %rax
	movl	(%rdx,%rax), %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -8(%rbp)
.L8:
	cmpl	$5, -8(%rbp)
	jle	.L9
	jmp	.L10
.L7:
	leaq	.LC2(%rip), %rdi
	call	puts@PLT
.L10:
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 10.3.0-1ubuntu1~20.10) 10.3.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	 1f - 0f
	.long	 4f - 1f
	.long	 5
0:
	.string	 "GNU"
1:
	.align 8
	.long	 0xc0000002
	.long	 3f - 2f
2:
	.long	 0x3
3:
	.align 8
4:
