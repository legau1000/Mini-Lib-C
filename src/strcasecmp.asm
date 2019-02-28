BITS 64

SECTION .text

GLOBAL strcasecmp:function

strcasecmp:
	cmp rdi, 0
		je RETURN
	cmp rsi, 0
		je RETURN
	mov rcx, 0
	jmp loop_start
	ret

loop_start:
	cmp byte [rsi + rcx], 0
		je FIRST_BIG
	cmp byte [rdi + rcx], 0
		je TWO_BIG
	mov r11b, [rdi + rcx]
	sub r11b, [rsi + rcx]
	cmp r11b, 0
		jne RETURN_VAL
	add rcx, 1
	jmp loop_start

RETURN_VAL:
	mov rax, [rdi + rcx]
	sub rax, [rsi + rcx]
	ret

FIRST_BIG:
	cmp byte [rdi + rcx], 0
		je RETURN
	mov rax, [rdi + rcx]
	ret

TWO_BIG:
	mov rax, [rsi + rcx]
	neg rax
	ret

RETURN:
	mov rax, 0
	ret