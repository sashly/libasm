

extern				_free

					section			.data
begin_list          dq              0
data_ref            dq              0
cmp_f				dq				0
free_f				dq				0
					
					global			_ft_list_remove_if
					section			.text
_ft_list_remove_if:
.list_data          equ             0
.list_next          equ             8
				    push			rbp
				    mov				rbp, rsp
				    sub             rsp, 8
					; (void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_f)(void *))
					; Registers and .data usage:
					; begin_list - t_list **begin_list
					; data_ref - void *data_ref
                    ; cmp_f - int (*cmp)()
                    ; free_f - void (*free_f)(void *)
                    ; r8 - t_list *node
                    ; r9 - t_list *temp
                    ; r10 - t_list *prev
                    ; r11 - tmp
					cmp				rdi, 0
					je				.end
					cmp				qword [rdi], 0
					je				.end
					cmp				rdx, 0
					je				.end
					cmp				rcx, 0
					je				.end
					mov				qword [rel begin_list], rdi
					mov				r8,	qword [rdi]
					mov				r9, r8
					mov				qword [rel data_ref], rsi
					mov				qword [rel cmp_f], rdx
					mov				qword [rel free_f], rcx
.loop_head:			cmp				r9, 0
					je				.loop_body
					mov				rdi, [r9]
					mov				rsi, qword [rel data_ref]
					push            r8
					push            r9
					call			qword [rel cmp_f]
					pop             r9
					pop             r8
					cmp				rax, 0
					jne				.loop_body
					mov				r8, qword [r9 + .list_next]
					push			r8
					mov				rdi, [r9]
					call			qword [rel free_f]
					mov				rdi, r9
					call			_free
					pop             r8
					mov				r9, r8
					jmp				.loop_head
.loop_body:			cmp				r9, 0
					je				.end
.loop_body_s:		cmp				r9, 0
					je				.end
					push			r8
					push			r9
					push            r10
					mov				rdi, [r9]
					mov				rsi, qword [rel data_ref]
					call			qword [rel cmp_f]
					pop             r10
					pop				r9
					pop				r8
					cmp				rax, 0
					je				.loop_body_s_end
					mov				r10, r9
					mov				r9, [r10 + .list_next]
					jmp				.loop_body_s
.loop_body_s_end:	cmp				r9, 0
					je				.end
					mov				r11, [r9 + .list_next]
					mov				[r10 + .list_next], r11
					push			r8
					push			r9
					push			r10
					mov				rdi, [r9]
					call			qword [rel free_f]
					mov				rdi, r9
					call			_free
					pop				r10
					pop				r9
					pop				r8
					mov				r9, [r10 + .list_next]
					jmp				.loop_body
.end:				mov             r9, qword [rel begin_list]
                    mov				[r9], r8
					leave
					ret

