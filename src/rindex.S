	[BITS 64]
	global rindex
	section .text

rindex:
	push rbp
	mov rbp, rsp
	mov r14, 0

loop:		
	cmp byte[rdi + r14], 0
	je next_loop

	inc r14
	jmp loop

next_loop:
	cmp [rdi + r14], sil
	je end

	cmp r14, 0
	je end_null

	sub r14, 1
	jmp next_loop

end_null:
	mov rax, 0
	leave
	ret

end:
	add rdi, r14
	mov rax, rdi
	leave
	ret
