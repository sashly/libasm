#ifndef LIBASM_H
# define LIBASM_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <errno.h>
# include <fcntl.h>

# ifndef GREEN
# define GREEN		"\033[1;32m"
# endif
# ifndef YELLOW
# define YELLOW		"\033[1;33m"
# endif
# ifndef BLUE
# define BLUE		"\033[1;35m"
# endif

# ifndef BUF_SIZE
# define BUF_SIZE	1000
# endif

ssize_t	ft_write(int fd, const void *buf, size_t nbyte);
ssize_t	ft_read(int fd, void *buf, size_t nbyte);
int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char 	*ft_strcpy(char *dst, const char *src);
char	*ft_strdup(const char *str);

int		ft_atoi_base(char *str, char *base);

typedef	struct		s_list
{
	void			*data;
	struct s_list	*next;
}					t_list;

void	ft_list_push_front(t_list **begin_list, void *data);
int		ft_list_size(t_list *begin);
void	ft_list_sort(t_list **begin_list, int (*cmp)());
void	ft_list_remove_if(t_list **begin_list, void *data_ref,
						  int (*cmp)(), void (*free_fct)(void *));

void	ft_free_node(void *data);

#endif