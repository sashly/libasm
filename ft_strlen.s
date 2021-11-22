

				global			_ft_strlen
				section			.text
_ft_strlen:		xor				rcx, rcx
.loop:			cmp				byte [rdi], 0
				je				.end
				inc				rdi
				inc				rcx
				jmp				.loop
.end:			mov				rax, rcx
				ret
