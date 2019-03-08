BITS 64

SECTION .text

GLOBAL my_memset:function

my_memset:
	cmp rdi, 0
		je RETURN
	cmp rdx, 0
		je RETURN
	mov r10, 0
	jmp loop_start
	ret

loop_start:	
	cmp r10, rdx
		je RETURN
	mov [rdi + r10], sil
	add r10, 1
	jne	loop_start

RETURN:
	mov rax, rdi
	ret
