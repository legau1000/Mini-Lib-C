BITS 64

SECTION .text

GLOBAL strstr:function

strstr:
	mov rax, 0
	cmp rdi, 0
		je RETURN
	cmp rsi, 0
		je RETURN
	jmp loop_start
	ret

loop_start:	
	cmp byte [rdi + rax], sil
		je RETURN
	add rax, 1
	jne	loop_start

RETURN:
	add rax, rdi
	ret