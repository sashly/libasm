

extern		___error

				global			_ft_read
				section			.text
_ft_read:       push			r15
				mov				rax, 0x02000003
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
