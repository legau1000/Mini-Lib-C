BITS 64

SECTION .text

GLOBAL strcspn:function

strcspn:
	cmp rdi, 0
		je RETURN
	cmp rsi, 0
		je RETURN
	mov rcx, 0
	mov rdx, 0
	jmp loop_start
	ret

loop_start:
	cmp byte [rdi + rcx], 0
		je RETURN
	jmp second_loop

second_loop:
	cmp byte [rsi + rdx], 0
		je res
	mov r8b, [rsi + rdx]
	cmp byte [rdi + rcx], r8b
		je RETURN_GOOD
	add rdx, 1
	jmp second_loop

res:
	add rcx, 1
	mov rdx, 0
	jmp loop_start

RETURN_GOOD:
	mov rax, rcx
	ret

RETURN:
	mov rax, 0
	ret