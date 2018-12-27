%define A 65
%define Z 90
%define a 97
%define z 122
section .text
	global ft_isalpha

ft_isalpha:

uppercase:
	cmp rdi, A
	jl false
	cmp rdi, Z
	jg lowercase
	jmp false

lowercase:
	cmp rdi, a
	jl false
	cmp rdi, z
	jg false

true:
	mov rax, 1
	ret
false:
	mov rax, 0
	ret 
