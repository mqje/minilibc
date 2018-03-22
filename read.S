	[BITS 64]
	global read
	section .text
	extern __errno_location

read:
	push rbp
	mov rbp, rsp

	mov rax, 0
	syscall
	cmp rax, 0
	jge end
	neg rax
	push rax
	call __errno_location wrt ..plt
	pop r8
	mov [rax], r8
	mov rax, -1

end:
	leave
	ret
	
