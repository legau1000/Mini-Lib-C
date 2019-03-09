BITS 64

SECTION .text

GLOBAL rindex:function

rindex:
	cmp rdi, 0
		je RETURN
	mov rcx, 0
	jmp get_end
	ret

get_end:
	cmp byte [rdi + rcx], 0
		je loop_start
	add rcx, 1
	jmp get_end

loop_start:
	cmp rcx, -1
		je NULL
	cmp byte [rdi + rcx], sil
		je RETURN
	sub rcx, 1
	jmp	loop_start

NULL:
	mov rax, 0
	ret

RETURN:
	mov rax, rdi
	add rax, rcx
	ret