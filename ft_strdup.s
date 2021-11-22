

extern		_ft_strlen
extern		_ft_strcpy
extern		_malloc

				global			_ft_strdup
				section			.text
_ft_strdup:		push            rdi
				call			_ft_strlen
				inc				rax
				mov				rdi, rax
				call			_malloc
				pop				rdi
				cmp				rax, 0
				je				.end
				mov				rsi, rdi
				mov				rdi, rax
				call			_ft_strcpy
.end:			ret
