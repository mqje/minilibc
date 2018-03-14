	[BITS 64]
	global strcspn
	section .text

strcspn:
	push rbp
	mov rbp, rsp
	mov r14, rdi
	mov rcx, 0

loop:
	cmp byte[r14], 0
	je end
	
	mov r15, rsi
	
	other_loop:
		cmp byte[r15], 0
		je end_loop

		mov bl, [r14]

	
		cmp bl, [r15]
		je end
		inc r15
	
		jmp other_loop

	end_loop:
	
	inc r14
	inc rcx	
	jmp loop

end:
	mov rax, rcx
	leave
	ret
	
	
