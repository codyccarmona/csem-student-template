	.text
	.file	"QuadReader"
	.globl	scale                           # -- Begin function scale
	.p2align	4, 0x90
	.type	scale,@function
scale:                                  # @scale
	.cfi_startproc
# %bb.0:                                # %entry
	movl	%edi, -4(%rsp)
	testl	%edi, %edi
	je	.LBB0_5
# %bb.1:                                # %L2
	movl	$0, -8(%rsp)
	cmpl	$5, -8(%rsp)
	jg	.LBB0_4
	.p2align	4, 0x90
.LBB0_3:                                # %L5
                                        # =>This Inner Loop Header: Depth=1
	movslq	-8(%rsp), %rax
	movl	m(,%rax,4), %ecx
	imull	-4(%rsp), %ecx
	movl	%ecx, m(,%rax,4)
	incl	-8(%rsp)
	cmpl	$5, -8(%rsp)
	jle	.LBB0_3
.LBB0_4:                                # %L6
	movl	$1, %eax
	retq
.LBB0_5:                                # %L1
	xorl	%eax, %eax
	retq
.Lfunc_end0:
	.size	scale, .Lfunc_end0-scale
	.cfi_endproc
                                        # -- End function
	.globl	main                            # -- Begin function main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:                                # %entry
	pushq	%rax
	.cfi_def_cfa_offset 16
	movabsq	$4294967296, %rax               # imm = 0x100000000
	movq	%rax, m(%rip)
	movabsq	$12884901890, %rax              # imm = 0x300000002
	movq	%rax, m+8(%rip)
	movabsq	$21474836484, %rax              # imm = 0x500000004
	movq	%rax, m+16(%rip)
	movl	$10, 4(%rsp)
	movl	$10, %edi
	callq	scale
	testl	%eax, %eax
	je	.LBB1_4
# %bb.1:                                # %L7
	movl	$0, (%rsp)
	cmpl	$5, (%rsp)
	jg	.LBB1_5
	.p2align	4, 0x90
.LBB1_3:                                # %L10
                                        # =>This Inner Loop Header: Depth=1
	movl	(%rsp), %esi
	movl	$.L__unnamed_1, %edi
	xorl	%eax, %eax
	callq	printf
	movslq	(%rsp), %rax
	movl	m(,%rax,4), %esi
	movl	$.L__unnamed_2, %edi
	xorl	%eax, %eax
	callq	printf
	incl	(%rsp)
	cmpl	$5, (%rsp)
	jle	.LBB1_3
	jmp	.LBB1_5
.LBB1_4:                                # %L12
	movl	$.L__unnamed_3, %edi
	xorl	%eax, %eax
	callq	printf
.LBB1_5:                                # %L13
	xorl	%eax, %eax
	popq	%rcx
	.cfi_def_cfa_offset 8
	retq
.Lfunc_end1:
	.size	main, .Lfunc_end1-main
	.cfi_endproc
                                        # -- End function
	.type	m,@object                       # @m
	.comm	m,24,16
	.type	.L__unnamed_1,@object           # @0
	.section	.rodata.str1.1,"aMS",@progbits,1
.L__unnamed_1:
	.asciz	"m[%d]"
	.size	.L__unnamed_1, 6

	.type	.L__unnamed_2,@object           # @1
.L__unnamed_2:
	.asciz	" = %d\n"
	.size	.L__unnamed_2, 7

	.type	.L__unnamed_3,@object           # @2
.L__unnamed_3:
	.asciz	"scale factor is zero\n"
	.size	.L__unnamed_3, 22

	.section	".note.GNU-stack","",@progbits
