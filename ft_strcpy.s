

				global			_ft_strcpy
				section			.text
_ft_strcpy:
				mov				rax, rdi
.loop:			cmp				byte [rsi], 0
				je				.end
				movsb
				jmp				.loop
.end:			mov				byte [rdi], 0
				ret
