NAME    = libasm.a

AC      = nasm

AFLAGS  = -fmacho64

RM      = rm -f

SRCS    =	ft_strlen.s \
			ft_strcpy.s \
			ft_strcmp.s \
			ft_write.s \
			ft_read.s \
			ft_strdup.s

SRCS_B  = 	ft_atoi_base_bonus.s \
          	ft_list_push_front_bonus.s \
          	ft_list_size_bonus.s \
          	ft_list_sort_bonus.s \
          	ft_list_remove_if_bonus.s
SRCS_T  =   libasm_test.c

OBJS    = $(SRCS:.s=.o)

OBJS_B  = $(SRCS_B:.s=.o)

ifeq ($(MAKECMDGOALS), bonus)
OBJS := $(OBJS) $(OBJS_B)
endif

.s.o :
	$(AC) $(AFLAGS) $< -o $(<:.s=.o)

$(NAME): $(OBJS)
	ar -rcs $@ $?

all: $(NAME)

bonus: all

test: $(SRCS_T)
	gcc -Wall -Wextra -Werror $(SRCS_T) -o libasm_test -L. -lasm

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean:     clean
	$(RM) $(NAME)
	$(RM) file_write_test file_ft_write_test libasm_test

re:         fclean all

.PHONY:      all bonus clean fclean re .s.o

