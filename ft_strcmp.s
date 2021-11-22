

				global			_ft_strcmp
				section			.text
_ft_strcmp:
.loop:			cmp				byte [rsi], 0
				je				.end
				mov				cl,	byte [rsi]
				cmp				cl, byte [rdi]
				jne				.end
				inc				rsi
				inc				rdi
				jmp				.loop
.end:			mov				dl, byte [rdi]
				sub				dl, byte [rsi]
				movsx			rax, dl
				ret
