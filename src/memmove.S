        [BITS 64]               ; Obligatoire

	global omemmove	;  initialize the name of the function Obligatoire
	section .text	; // set the .text Obligatoire

omemmove:
	push rbp        ; Initialize stack
	mov rbp, rsp    ; Initialize stack
	mov r14, rdi
	mov r15, rsi

loop:
	cmp rdx, rsi
	jle end

	cmp rdi, 0
	je end

	cmp rsi, 0
	je end

	mov bl, [rsi]
	mov [rdi], bl

	sub rdx, 1
	inc rdi
	inc rsi

	jmp loop

end:
	mov rax, r14    ; assign cl to rax
	leave	; free the stack
	ret             ; return obligatoire 
