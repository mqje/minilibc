	[BITS 64]
	global my_strcasecmp
	section .text

my_strcasecmp:
	push rbp
	mov rbp, rsp

check_argument:
	mov al, [rdi]
	mov bl, [rsi]
		
loop:
	cmp al, 0
	je end_null
	
	cmp bl, 0
	je end_null

	cmp al, 97
	jl to_lower_a

	cmp bl, 97
	jl to_lower_b
	
	cmp al, bl
	jne end

	inc rdi
	inc rsi
	jmp check_argument

to_lower_a:
	add al, 32
	jmp loop
	
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
