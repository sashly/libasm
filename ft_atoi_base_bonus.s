

extern		_ft_strlen

					section			.data
bs:					dq				0

					section			.text
					global			_ft_atoi_base
_ft_atoi_base:		push			rbp
					mov				rbp, rsp
					; Register usage:
					; r12 - return value
					; r13 - sign
					; r14 - temp (rdi - "str")
					; r15 - temp (rsi - "base")
					push			r12
					push			r13
					push			r14
					push            r15
					xor				r12, r12
					mov				r13, 1
					mov             r14, rdi
					mov             r15, rsi
					cmp				rdi, 0
					je				.end_loop
					cmp				rsi, 0
					je				.end_loop
					mov				rdi, r15
					call			_ft_strlen
					cmp				rax, 2
					jl				.end_loop
					mov				[rel bs], rax
					mov				rdi, r15
					call			_check_base
					cmp				rax, 0
					je				.end_loop
.loop_w:			cmp				byte [r14], 0
					je				.end_loop
					mov				al, byte [r14]
					call			_is_wspace
					cmp				rax, 0
					je				.loop_s
					inc				r14
					jmp				.loop_w
.loop_s:			cmp				byte [r14], 0
					je				.end_loop
					mov				al, byte [r14]
					cmp				al, '+'
					je				.plus
					cmp				al, '-'
					je				.minus
					jmp				.loop_c
.minus:				imul			r13, -1
.plus:				inc				r14
					jmp				.loop_s
.loop_c:			cmp				byte [r14], 0
					je				.end_loop
					mov				al, byte [r14]
					mov             rdi, r15
					call			_find_index
					cmp				rax, -1
					je				.end_loop
					imul			r12, [rel bs]
					add				r12, rax
					inc				r14
					jmp				.loop_c
.end_loop:			mov				rax, r12
					imul			rax, r13
					pop				r15
					pop             r14
					pop             r13
					pop             r12
					leave
					ret

					static			_find_index
_find_index:		mov				r10, -1
					xor				rcx, rcx
.loop:				cmp				byte [rdi], 0
					je				.end_loop
					cmp				byte [rdi], al
					je				.found
					inc				rcx
					inc				rdi
					jmp				.loop
.found:				mov				r10, rcx
.end_loop:			mov				rax, r10
					ret

					static			_is_wspace
_is_wspace:			cmp				al, 32
					je				.found
					cmp				al, 9
					je				.found
					cmp				al, 10
					je				.found
					cmp				al, 11
					je				.found
					cmp				al, 12
					je				.found
					cmp				al, 13
					je				.found
					mov				rax, 0
					ret
.found:				mov				rax, 1
					ret

					static			_occur_count
_occur_count:		xor				rcx, rcx
.loop				cmp				byte [rdi], 0
					je				.end_loop
					cmp				byte [rdi], al
					jne				.next
					inc				rcx
.next				inc				rdi
					jmp				.loop
.end_loop			mov				rax, rcx
					ret

					static			_check_base
_check_base:        push            rbp
                    mov             rbp, rsp
                    push            r12
                    mov             r12, rdi
.loop:				mov				al, byte [r12]
					cmp				al, 0
					je				.valid
					cmp				al, '+'
					je				.ivalid
					cmp				al, '-'
					je				.ivalid
					call			_is_wspace
					cmp				rax, 1
					je				.ivalid
					mov				al, byte [r12]
					mov             rdi, r12
					call			_occur_count
					cmp				rax, 1
					jg				.ivalid
					inc				r12
					jmp				.loop
.valid:				mov				rax, 1
                    pop             r12
                    leave
					ret
.ivalid:			mov				rax, 0
                    pop             r12
                    leave
					ret


