BITS 64

SECTION .text

GLOBAL strchr:function

strchr:
	mov rax, 0
	cmp rdi, 0
		je RETURN
	jmp loop_start
	ret

loop_start:
	cmp byte [rdi + rax], sil
		je RETURN
	cmp byte [rdi + rax], 0
		je NULL
	add rax, 1
	jne	loop_start

NULL:
	mov rax, 0
	ret

RETURN:
	add rax, rdi
	ret