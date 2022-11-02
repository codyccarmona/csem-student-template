	.text
	.file	"QuadReader"
	.globl	main                            # -- Begin function main
	.p2align	4, 0x90
	.type	main,@function
main:                                   # @main
	.cfi_startproc
# %bb.0:                                # %entry
	pushq	%rax
	.cfi_def_cfa_offset 16
	movl	$3, 4(%rsp)
	xorl	%eax, %eax
	testb	%al, %al
	jne	.LBB0_3
# %bb.1:                                # %L1
	cmpl	$999, 4(%rsp)                   # imm = 0x3E7
	jge	.LBB0_3
# %bb.2:                                # %L2
	movl	4(%rsp), %esi
	movl	$.L__unnamed_1, %edi
	xorl	%eax, %eax
	callq	printf
.LBB0_3:                                # %L3
	xorl	%eax, %eax
	popq	%rcx
	.cfi_def_cfa_offset 8
	retq
.Lfunc_end0:
	.size	main, .Lfunc_end0-main
	.cfi_endproc
                                        # -- End function
	.type	.L__unnamed_1,@object           # @0
	.section	.rodata.str1.1,"aMS",@progbits,1
.L__unnamed_1:
	.asciz	"i:%d"
	.size	.L__unnamed_1, 5

	.section	".note.GNU-stack","",@progbits
