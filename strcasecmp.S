	[BITS 64]
	global strcasecmp
	section .text

strcasecmp:
	push rbp
	mov rbp, rsp

check_argument:
	mov al, [rdi]
	mov r14b, [rsi]
		
loop:
	cmp al, 0
	je end
	
	cmp r14b, 0
	je end

	cmp al, 65
	jge cmp_a

middle_loop:	
	cmp r14b, 65
	jge cmp_b

end_loop:
	cmp al, r14b
	jne end

	inc rdi
	inc rsi
	jmp check_argument

cmp_a:	
	cmp al, 90
	jg middle_loop
	
to_lower_a:
	add al, 32
	jmp loop

cmp_b:	
	cmp r14b, 90
	jg end_loop
	
to_lower_b:
	add r14b, 32
	jmp loop

end_null:
	mov rax, 0
	leave
	ret

end:
	sub rax, r14
	leave
	ret
