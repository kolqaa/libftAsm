section .text
	global 	ft_isalnum
	extern 	ft_isdigit
	extern 	ft_isalpha

ft_isalnum:
	call	ft_isdigit
	cmp	rax, 1
	jne	check_if_alpha
	mov	rax, 1
	ret

check_if_alpha:
	call	ft_isalpha
	cmp	rax, 1
	je	_isalnum
	mov	rax, 0
	ret

_isalnum:
	mov	rax, 1
	ret
