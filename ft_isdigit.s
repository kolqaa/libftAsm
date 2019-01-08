section .text
	global ft_isdigit

ft_isdigit:
	cmp rdi, 48
	jl false
	cmp rdi, 57
	jg false
	mov rax, 1
	ret

false:
	mov rax, 0
	ret
