	[BITS 64]
	global strcspn
	section .text
	
strcspn:
	mov rdx, 0
	mov rcx, 0

loop:
	cmp byte[rdi + rdx], 0
	je endloop

	jmp subloop

subloop:
	mov al, [rsi + rcx]

	cmp al, 0
	je end_subloop

	cmp al, [rdi + rdx]
	je endloop

	inc rcx
	jmp subloop

end_subloop:
	inc rdx
	mov rcx, 0
	jmp loop

endloop:
	mov rax, rdx
	ret
