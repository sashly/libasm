
				section			.data
begin_list		dq				0
swap_flag		db				1
cmp_f			dq				0

				global			_ft_list_sort
				section			.text
_ft_list_sort:
.list_data      equ             0
.list_next      equ             8
				push			rbp
				mov				rbp, rsp
				; (void ft_list_sort(t_list **begin_list, int (*cmp)())
				; Registers and .data usage:
				; begin_list - t_list **begin_list
				; cmp_f - int (*cmp)()
				; swap_flag - bubble sort swap_flag
				; r8 - t_list *node
				; r9 - t_list (*node)->next
				; r10, r11 - swap temps
				cmp				rdi, 0
				je				.end
				cmp				qword [rdi], 0
				je				.end
				cmp				rsi, 0
				je				.end
				mov				r8, [rdi]
				mov				[rel begin_list], r8
				mov				qword [rel cmp_f], rsi
.loop_b:		cmp				byte [rel swap_flag], 1
				jne				.end
				mov				byte [rel swap_flag], 0
				mov				r8, [rel begin_list]
.loop_s:		mov				r9, [r8 + .list_next]
				cmp				r9, 0
				je				.loop_b
				mov				rdi, qword [r8 + .list_data]
				mov				rsi, qword [r9 + .list_data]
				push			r8
				push			r9
				call			qword [rel cmp_f]
				pop				r9
				pop				r8
				cmp				rax, 0
				jle				.next
.swap:			mov				byte [rel swap_flag], 1
				mov				r10, qword [r8]
				mov				r11, qword [r9]
				mov				qword [r8], r11
				mov				qword [r9], r10
.next:			mov				r8, r9
				jmp				.loop_s
.end:			leave
				ret

