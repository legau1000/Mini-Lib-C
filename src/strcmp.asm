BITS 64

SECTION .text

GLOBAL strcm:function

strcm:
	cmp rdi, 0
		je RETURN
	cmp rsi, 0
		je RETURN
	; cmp rdx, 0
	; 	je RETURN
	mov r10, 0
	jmp loop_start
	ret

loop_start:	
	cmp byte [rdi + r10], 0
		je FIRST_BIG ;first stop (vérif if second not)
	cmp byte [rsi + r10], 0
		je TWO_BIG ;second stop
	mov r11b, byte [rsi + r10]
	cmp byte [rdi + r10], r11b
		jb FIRST_SUPP ;first supp
		ja SECOND_SUPP ;second supp
	add r10, 1
	jne	loop_start

FIRST_SUPP:
	mov r13b, byte [rdi + r10]
	sub r13b, r11b
	mov al, r13b
	ret

SECOND_SUPP:
	sub r11b, byte [rdi + r10]
	mov al, r11b
	ret

FIRST_BIG:
	cmp byte [rsi + r10], 0
		je RETURN
	mov r11b, byte [rsi + r10]
	mov al, r11b
	neg al
	ret

TWO_BIG:
	mov r11b, byte [rdi + r10]
	mov al, r11b
	ret

RETURN:
	mov rax, 0
	ret
