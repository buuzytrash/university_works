	.text
	.file	"cursor.mod"
	.globl	_t5RecEx9SetCenter
	.p2align	4, 0x90
	.type	_t5RecEx9SetCenter,@function
_t5RecEx9SetCenter:
	.cfi_startproc
	movb	$1, .L_t5RecEx1c(%rip)
	movq	$100, .L_t5RecEx1c+8(%rip)
	movq	$100, .L_t5RecEx1c+16(%rip)
	retq
.Lfunc_end0:
	.size	_t5RecEx9SetCenter, .Lfunc_end0-_t5RecEx9SetCenter
	.cfi_endproc

	.section	".note.GNU-stack","",@progbits
