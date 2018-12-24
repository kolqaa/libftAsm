section .text
	global ft_strcat 

ft_strcat:
	
dst_len:
	cmp byte[rdi], 0x00
	je append
	inc rdi
	jmp dst_len

append:
	cmp byte[rsi], 0x00
	je exit
	mov rax, [rsi]
	mov [rdi], rax
	inc rsi
	inc rdi
	jmp append

exit:
	inc rdi
	mov rdi, 0x00
	mov rax, rdi
	ret 
