BITS 64

SECTION .text

GLOBAL my_memcpy:function

my_memcpy:
	cmp rdi, 0
		je RETURN
	cmp rsi, 0
		je RETURN
	cmp rdx, 0
		je RETURN
	mov r10, 0
	jmp loop_start
	ret

loop_start:	
	cmp r10, rdx
		je RETURN
	mov r8, [rsi + r10]
	mov [rdi + r10], r8b
	add r10, 1
	jne	loop_start

RETURN:
	mov rax, rdi
	ret
