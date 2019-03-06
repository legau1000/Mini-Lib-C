BITS 64

SECTION .text

GLOBAL _strstr:function

_strstr:
	mov rcx, 0
	mov r8, 0
	cmp rdi, 0
		je NULL
	cmp rsi, 0
		je NULL
	jmp loop_start
	ret

loop_start:	
	cmp byte [rdi + rcx], 0
		je RETURN
	cmp byte [rsi + rcx], 0
		je NULL
	mov r8b, byte [rsi + rcx]
	cmp byte [rdi + rcx], r8b
		jne NULL
	add rcx, 1
	jmp loop_start

NULL:
	mov rax, 0
	ret

RETURN:
	mov rax, rdi
	ret