
extern				_malloc

					struc			node
data				resq			1
next				resq			1
					endstruc

					global			_ft_list_push_front
					section			.text
_ft_list_push_front:
.data				equ				0
.next				equ				8
                    push            rbp
                    mov             rbp, rsp
                    sub             rsp, 24
					; Registers and stack usage:
					; (void ft_list_push_front(t_list **head, void *data))
					; Stack: two local variables rsp - rsi (void *data), (rsp + 8) - [rdi] - (t_list *head)
					; r8, r9 - temps
					; r11 - t_list **head
					mov				[rsp + .data], rsi
					mov				r11, rdi
					mov				r8, [rdi]
					mov				[rsp + .next], r8
					mov				rdi, node_size
					push            r11
					call			_malloc
					pop             r11
					cmp             rax, 0
					je              .end
					mov			    r8, [rsp + .data]
					mov				[rax + .data], r8
					mov			    r9, [rsp + .next]
					mov				[rax + .next], r9
					mov				[r11], rax
.end				leave
					ret

