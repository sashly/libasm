

extern		___error

				global			_ft_write
				section			.text
_ft_write:      push			r15
				mov				rax, 0x02000004
				syscall
				mov				r15, rax
				jc				.error
				pop				r15
				ret
.error:			call			___error
				mov				[rax], r15
				mov				rax, -1
				pop				r15
				ret
