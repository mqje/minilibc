	[BITS 64]
	global strcasecmp
	section .text

strcasecmp:
	push rbp
	mov rbp, rsp

check_argument:
	mov al, [rdi]
	mov bl, [rsi]
	cmp bl, 0
		
loop:
	cmp al, 0
	je end
	
	cmp bl, 0
	je end

	cmp al, 65
	jge cmp_a

middle_loop:	
	cmp bl, 65
	jge cmp_b

end_loop:		
	cmp al, bl
	jne end

	inc rdi
	inc rsi
	jmp check_argument

cmp_a:	
	cmp al, 90
	jg middle_loop
	
to_lower_a:
	add al, 32
	jmp middle_loop

cmp_b:	
	cmp bl, 90
	jg end_loop
	
to_lower_b:
	add bl, 32
	jmp loop

end_null:
	mov rax, 0
	leave
	ret

end:
	sub rax, rbx
	leave
	ret
