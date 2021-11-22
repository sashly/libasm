

				global			_ft_list_size
				section			.text
_ft_list_size:
.next			equ				8
				xor				rcx, rcx
.loop:			cmp				rdi, 0
				je				.end_loop
				inc				rcx
				mov				rdi, [rdi + .next]
				jmp				.loop
.end_loop		mov				rax, rcx
				ret
