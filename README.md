# Libasm
***The aim of this project is to get familiar with assembly language.***

## Description
A little 64 bits assembly language project, written in __Intel syntax__, and using __nasm__ to compile.

#### Functions implemented:
```C
    ssize_t     ft_write(int fd, const void *buf, size_t nbyte);
    ssize_t     ft_read(int fd, void *buf, size_t nbyte);
    int		ft_strlen(char *str);
    int		ft_strcmp(char *s1, char *s2);
    char 	*ft_strcpy(char *dst, const char *src);
    char	*ft_strdup(const char *str);
```
#### Bonus part:
```C
    int         ft_atoi_base(char *str, char *base);
    void        ft_list_push_front(t_list **begin_list, void *data);
    int         ft_list_size(t_list *begin);
    void        ft_list_sort(t_list **begin_list, int (*cmp)());
    void        ft_list_remove_if(t_list **begin_list, void *data_ref,
                                 int (*cmp)(), void (*free_fct)(void *));
```

#### Installation and usage:
```bash
    git clone https://github.com/sashly/libasm.git libasm
    cd ./libasm
    make bonus
    make test
    ./libasm_test
```


