section .text 
	global ft_bzero

ft_bzero:
	mov rcx, 0
loop:
	cmp rsi, rcx
	jle exit
	mov byte[rdi + rcx], 0
	inc rcx
	jmp loop
exit:
	ret 
