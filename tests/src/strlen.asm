BITS 64

SECTION .text

GLOBAL my_strlen:function

my_strlen:
	mov rax, 0
	cmp rdi, 0
		je RETURN
	jmp loop_start
	ret

loop_start:	
	cmp byte [rdi + rax], 0
		je RETURN
	add rax, 1
	jne	loop_start

RETURN:
	ret