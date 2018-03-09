        [BITS 64]
	global my_strstr
	section .text

my_strstr:
	push rbp
	mov rbp, rsp
	xor rcx, rcx
	xor rax, rax

loop:
	cmp byte[rdi + rcx], 0
	je end_null
	
	mov rax, 0
	
other_loop:
	mov r14, rcx
	add r14, rax
	mov bl, byte[rsi + rax]
	cmp byte[rdi + r14], bl
	jne end_loop
	mov r14, rax
	inc r14
	cmp byte[rsi + r14], 0
	je end
	inc rax
	jmp other_loop

end_loop:	
	inc rcx
	jmp loop
	
	
my_first_end:
	mov rax, rdi
	leave
	ret

end_null:
	mov rax, 0
	leave
	ret

end:
	movsx rax, byte[rdi + rcx] 
	leave
	ret
