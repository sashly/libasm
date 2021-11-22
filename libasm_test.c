#include "libasm.h"

void	test_ft_strlen(void)
{
	char *s1 = "";
	char *s2 = "Hello !";
	char *s3 = " hi there  ! ! ! ";
	char *s4 = "Cras condimentum ante lacus. Integer ut magna vitae metus egestas convallis at vel justo. Suspendisse vel tortor id libero tempor pretium. Curabitur id risus at nisi laoreet vulputate egestas quis est.";
	char *s5 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec in efficitur elit. Suspendisse pretium quis libero sed tincidunt. Praesent volutpat, nibh sit amet faucibus faucibus, quam leo tincidunt eros, in mattis magna tellus eu urna. Curabitur facilisis quis ex non ultricies. Suspendisse potenti. Curabitur porta nisi at velit blandit mattis. Nam auctor ligula lectus, in interdum purus bibendum sit amet. Sed volutpat est nec velit tempor laoreet. Vivamus nec nunc nisi. Vivamus faucibus enim magna, tincidunt posuere sem vehicula in. Nulla pellentesque, orci auctor commodo aliquam, nisi lacus tempus ante, sit amet malesuada dui lacus eget purus. Aliquam erat volutpat. Integer rhoncus, massa id luctus imperdiet, massa ipsum volutpat diam, at vulputate lacus ex vitae ligula. Curabitur vehicula vitae turpis quis ultricies. Morbi volutpat, lorem at mattis viverra, nibh dolor accumsan eros, eget mollis turpis dolor ac massa. Nunc et arcu eget urna ornare consequat. In hac habitasse platea dictumst. Nullam rhoncus velit vitae sapien venenatis iaculis. Nullam vitae urna orci. Pellentesque luctus dapibus pulvinar. Donec eu lorem eu elit tincidunt auctor. Mauris euismod justo vel placerat malesuada. Cras condimentum ante lacus. Integer ut magna vitae metus egestas convallis at vel justo. Suspendisse vel tortor id libero tempor pretium. Curabitur id risus at nisi laoreet vulputate egestas quis est. Aliquam ultricies, neque at pulvinar finibus, orci nisi sollicitudin dolor, sed blandit leo purus nec ex. Cras ut metus non lorem auctor rhoncus. In in justo vitae justo posuere facilisis at nec nibh. Duis arcu purus, auctor et ante ut, tempor iaculis erat. Aliquam rhoncus mattis vestibulum. Praesent dictum a nunc vitae semper. Nunc non felis quis nibh bibendum gravida. Cras auctor, ipsum in eleifend bibendum, nulla sapien accumsan ex, sit amet pellentesque dolor erat nec massa. In ultricies tristique sollicitudin. In dapibus est ut velit elementum fringilla. Cras vel velit condimentum, malesuada tortor in, hendrerit justo. Sed blandit, ante vel feugiat rhoncus, tortor massa egestas nisl, eu fermentum dui ex eget urna. Maecenas non accumsan massa. Pellentesque sodales tortor leo, nec suscipit est imperdiet quis. Cras id sapien sed ligula hendrerit ornare. Etiam posuere nibh a turpis elementum, eu dignissim diam vulputate.";
	printf("                       %s|||||||||||||||||||||||||||||||||||||||\n", YELLOW);
	printf("                       |||          ft_strlen test:        |||\n");
	printf("                       |||||||||||||||||||||||||||||||||||||||\n");
	printf("%sstr: |%s|\n\n%sstrlen: |%lu| --> ft_strlen: |%d|\n\n", BLUE, s1, GREEN, strlen(s1), ft_strlen(s1));
	printf("%sstr: |%s|\n\n%sstrlen: |%lu| --> ft_strlen: |%d|\n\n", BLUE, s2, GREEN, strlen(s2), ft_strlen(s2));
	printf("%sstr: |%s|\n\n%sstrlen: |%lu| --> ft_strlen: |%d|\n\n", BLUE, s3, GREEN, strlen(s3), ft_strlen(s3));
	printf("%sstr: |%s|\n\n%sstrlen: |%lu| --> ft_strlen: |%d|\n\n", BLUE, s4, GREEN, strlen(s4), ft_strlen(s4));
	printf("%sstr: |%s|\n\n%sstrlen: |%lu| --> ft_strlen: |%d|\n\n", BLUE, s5, GREEN, strlen(s5), ft_strlen(s5));
}

void 	test_ft_strcpy(void)
{
	char *s1 = "";
	char *s2 = "Hello !";
	char *s3 = " hi there  ! ! ! ";
	char *s4 = "Cras condimentum ante lacus. Integer ut magna vitae metus egestas convallis at vel justo. Suspendisse vel tortor id libero tempor pretium. Curabitur id risus at nisi laoreet vulputate egestas quis est.";
	char *s5 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec in efficitur elit. Suspendisse pretium quis libero sed tincidunt. Praesent volutpat, nibh sit amet faucibus faucibus, quam leo tincidunt eros, in mattis magna tellus eu urna. Curabitur facilisis quis ex non ultricies. Suspendisse potenti. Curabitur porta nisi at velit blandit mattis. Nam auctor ligula lectus, in interdum purus bibendum sit amet. Sed volutpat est nec velit tempor laoreet. Vivamus nec nunc nisi. Vivamus faucibus enim magna, tincidunt posuere sem vehicula in. Nulla pellentesque, orci auctor commodo aliquam, nisi lacus tempus ante, sit amet malesuada dui lacus eget purus. Aliquam erat volutpat. Integer rhoncus, massa id luctus imperdiet, massa ipsum volutpat diam, at vulputate lacus ex vitae ligula. Curabitur vehicula vitae turpis quis ultricies. Morbi volutpat, lorem at mattis viverra, nibh dolor accumsan eros, eget mollis turpis dolor ac massa. Nunc et arcu eget urna ornare consequat. In hac habitasse platea dictumst. Nullam rhoncus velit vitae sapien venenatis iaculis. Nullam vitae urna orci. Pellentesque luctus dapibus pulvinar. Donec eu lorem eu elit tincidunt auctor. Mauris euismod justo vel placerat malesuada. Cras condimentum ante lacus. Integer ut magna vitae metus egestas convallis at vel justo. Suspendisse vel tortor id libero tempor pretium. Curabitur id risus at nisi laoreet vulputate egestas quis est. Aliquam ultricies, neque at pulvinar finibus, orci nisi sollicitudin dolor, sed blandit leo purus nec ex. Cras ut metus non lorem auctor rhoncus. In in justo vitae justo posuere facilisis at nec nibh. Duis arcu purus, auctor et ante ut, tempor iaculis erat. Aliquam rhoncus mattis vestibulum. Praesent dictum a nunc vitae semper. Nunc non felis quis nibh bibendum gravida. Cras auctor, ipsum in eleifend bibendum, nulla sapien accumsan ex, sit amet pellentesque dolor erat nec massa. In ultricies tristique sollicitudin. In dapibus est ut velit elementum fringilla. Cras vel velit condimentum, malesuada tortor in, hendrerit justo. Sed blandit, ante vel feugiat rhoncus, tortor massa egestas nisl, eu fermentum dui ex eget urna. Maecenas non accumsan massa. Pellentesque sodales tortor leo, nec suscipit est imperdiet quis. Cras id sapien sed ligula hendrerit ornare. Etiam posuere nibh a turpis elementum, eu dignissim diam vulputate.";
	char s1_co[strlen(s1) + 1], s1_cm[strlen(s1) + 1];
	char s2_co[strlen(s2) + 1], s2_cm[strlen(s2) + 1];
	char s3_co[strlen(s3) + 1], s3_cm[strlen(s3) + 1];
	char s4_co[strlen(s4) + 1], s4_cm[strlen(s4) + 1];
	char s5_co[strlen(s5) + 1], s5_cm[strlen(s5) + 1];
	printf("                       %s|||||||||||||||||||||||||||||||||||||||\n", YELLOW);
	printf("                       |||          ft_strcpy test:        |||\n");
	printf("                       |||||||||||||||||||||||||||||||||||||||\n");
	printf("%sstrcpy:    |%s|\n\n%sft_strcpy: |%s|\n\n", BLUE, strcpy(s1_co, s1), GREEN, ft_strcpy(s1_cm, s1));
	printf("%sstrcpy:    |%s|\n\n%sft_strcpy: |%s|\n\n", BLUE, strcpy(s2_co, s2), GREEN, ft_strcpy(s2_cm, s2));
	printf("%sstrcpy:    |%s|\n\n%sft_strcpy: |%s|\n\n", BLUE, strcpy(s3_co, s3), GREEN, ft_strcpy(s3_cm, s3));
	printf("%sstrcpy:    |%s|\n\n%sft_strcpy: |%s|\n\n", BLUE, strcpy(s4_co, s4), GREEN, ft_strcpy(s4_cm, s4));
	printf("%sstrcpy:    |%s|\n\n%sft_strcpy: |%s|\n\n", BLUE, strcpy(s5_co, s5), GREEN, ft_strcpy(s5_cm, s5));
}

void	test_ft_strcmp(void)
{
	char *s1 = "";
	char *s3 = "Mauris";
	char *s4 = "magna";
	char *s5 = "lorem";
	char *s6 = "123";
	char *s7 = "124";
	printf("                       %s|||||||||||||||||||||||||||||||||||||||\n", YELLOW);
	printf("                       |||          ft_strcmp test:        |||\n");
	printf("                       |||||||||||||||||||||||||||||||||||||||\n");
	printf("%ss1: |%s| <---> s2: |%s|\n\n%sstrcmp: |%d|\n%sft_strcmp: |%d|\n\n", BLUE, s1, s1, GREEN, strcmp(s1, s1), GREEN, ft_strcmp(s1, s1));
	printf("%ss1: |%s| <---> s2: |%s|\n\n%sstrcmp: |%d|\n%sft_strcmp: |%d|\n\n", BLUE, s1, s3, GREEN, strcmp(s1, s3), GREEN, ft_strcmp(s1, s3));
	printf("%ss1: |%s| <---> s2: |%s|\n\n%sstrcmp: |%d|\n%sft_strcmp: |%d|\n\n", BLUE, s3, s1, GREEN, strcmp(s3, s1), GREEN, ft_strcmp(s3, s1));
	printf("%ss1: |%s| <---> s2: |%s|\n\n%sstrcmp: |%d|\n%sft_strcmp: |%d|\n\n", BLUE, s4, s5, GREEN, strcmp(s4, s5), GREEN, ft_strcmp(s4, s5));
	printf("%ss1: |%s| <---> s2: |%s|\n\n%sstrcmp: |%d|\n%sft_strcmp: |%d|\n\n", BLUE, s5, s4, GREEN, strcmp(s5, s4), GREEN, ft_strcmp(s5, s4));
	printf("%ss1: |%s| <---> s2: |%s|\n\n%sstrcmp: |%d|\n%sft_strcmp: |%d|\n\n", BLUE, s6, s7, GREEN, strcmp(s6, s7), GREEN, ft_strcmp(s6, s7));
	printf("%ss1: |%s| <---> s2: |%s|\n\n%sstrcmp: |%d|\n%sft_strcmp: |%d|\n\n", BLUE, s7, s6, GREEN, strcmp(s7, s6), GREEN, ft_strcmp(s7, s6));
}

void 	test_ft_write(void)
{
	char *s1 = "Suspendisse vel tortor id libero tempor pretium";
	char *s2 = "";
	char *s3 = "Mauris";
	char *s4 = NULL;
	int fd_stdout = 1;
	int ft_open_o = open("./file_write_test", O_RDWR | O_CREAT, S_IRWXU);
	int ft_open_m = open("./file_ft_write_test", O_RDWR | O_CREAT, S_IRWXU);
	int ft_open_wrong = open("./aaaaa", O_RDWR);
	int fd_wrong_1 = -1;
	int fd_wrong_2 = 13134;
	int reto, retm;
	printf("                       %s|||||||||||||||||||||||||||||||||||||||\n", YELLOW);
	printf("                       |||          ft_write test:         |||\n");
	printf("                       |||||||||||||||||||||||||||||||||||||||\n");
	errno = 0;
	write(fd_stdout, GREEN, strlen(GREEN));
	write(fd_stdout, "\nwrite:    |", strlen("\nwrite:    |"));
	reto = write(fd_stdout, s1, strlen(s1));
	write(fd_stdout, "|\n", strlen("|\n"));
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n", BLUE, reto, errno, strerror(errno));
	write(fd_stdout, GREEN, strlen(GREEN));
	write(fd_stdout, "ft_write: |", strlen("ft_write: |"));
	retm = ft_write(fd_stdout, s1, strlen(s1));
	write(fd_stdout, "|\n", strlen("|\n"));
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n", BLUE, retm, errno, strerror(errno));

	write(fd_stdout, GREEN, strlen(GREEN));
	write(fd_stdout, "\nwrite:    |", strlen("\nwrite:    |"));
	reto = write(fd_stdout, s2, strlen(s2));
	write(fd_stdout, "|\n", strlen("|\n"));
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n", BLUE, reto, errno, strerror(errno));
	write(fd_stdout, GREEN, strlen(GREEN));
	write(fd_stdout, "ft_write: |", strlen("ft_write: |"));
	retm = ft_write(fd_stdout, s2, strlen(s2));
	write(fd_stdout, "|\n", strlen("|\n"));
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n", BLUE, retm, errno, strerror(errno));

	write(fd_stdout, GREEN, strlen(GREEN));
	write(fd_stdout, "\nwrite:    |", strlen("\nwrite:    |"));
	reto = write(fd_stdout, s3, strlen(s3));
	write(fd_stdout, "|\n", strlen("|\n"));
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n", BLUE, reto, errno, strerror(errno));
	write(fd_stdout, GREEN, strlen(GREEN));
	write(fd_stdout, "ft_write: |", strlen("ft_write: |"));
	retm = ft_write(fd_stdout, s3, strlen(s3));
	write(fd_stdout, "|\n", strlen("|\n"));
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n", BLUE, retm, errno, strerror(errno));

	write(fd_stdout, GREEN, strlen(GREEN));
	write(fd_stdout, "\nwrite:    |", strlen("\nwrite:    |"));
	reto = write(fd_stdout, s4, 1);
	write(fd_stdout, "|\n", strlen("|\n"));
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n", BLUE, reto, errno, strerror(errno));
	write(fd_stdout, GREEN, strlen(GREEN));
	write(fd_stdout, "ft_write: |", strlen("ft_write: |"));
	retm = ft_write(fd_stdout, s4, 1);
	write(fd_stdout, "|\n", strlen("|\n"));
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n", BLUE, retm, errno, strerror(errno));

	write(fd_stdout, GREEN, strlen(GREEN));
	write(fd_stdout, "\nwrite:    |", strlen("\nwrite:    |"));
	reto = write(fd_wrong_1, s3, strlen(s3));
	write(fd_stdout, "|\n", strlen("|\n"));
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n", BLUE, reto, errno, strerror(errno));
	write(fd_stdout, GREEN, strlen(GREEN));
	write(fd_stdout, "ft_write: |", strlen("ft_write: |"));
	retm = ft_write(fd_wrong_1, s3, strlen(s3));
	write(fd_stdout, "|\n", strlen("|\n"));
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n", BLUE, retm, errno, strerror(errno));

	write(fd_stdout, GREEN, strlen(GREEN));
	write(fd_stdout, "\nwrite:    |", strlen("\nwrite:    |"));
	reto = write(fd_wrong_2, s3, strlen(s3));
	write(fd_stdout, "|\n", strlen("|\n"));
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n", BLUE, reto, errno, strerror(errno));
	write(fd_stdout, GREEN, strlen(GREEN));
	write(fd_stdout, "ft_write: |", strlen("ft_write: |"));
	retm = ft_write(fd_wrong_2, s3, strlen(s3));
	write(fd_stdout, "|\n", strlen("|\n"));
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n", BLUE, retm, errno, strerror(errno));

	errno = 0;
	write(fd_stdout, GREEN, strlen(GREEN));
	write(fd_stdout, "\nwrite:    |", strlen("\nwrite:    |"));
	reto = write(ft_open_o, s1, strlen(s1));
	write(fd_stdout, "|\n", strlen("|\n"));
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n", BLUE, reto, errno, strerror(errno));
	write(fd_stdout, GREEN, strlen(GREEN));
	write(fd_stdout, "ft_write: |", strlen("ft_write: |"));
	retm = ft_write(ft_open_m, s1, strlen(s1));
	write(fd_stdout, "|\n", strlen("|\n"));
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n", BLUE, retm, errno, strerror(errno));

	write(fd_stdout, GREEN, strlen(GREEN));
	write(fd_stdout, "\nwrite:    |", strlen("\nwrite:    |"));
	reto = write(ft_open_wrong, s1, strlen(s1));
	write(fd_stdout, "|\n", strlen("|\n"));
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n", BLUE, reto, errno, strerror(errno));
	write(fd_stdout, GREEN, strlen(GREEN));
	write(fd_stdout, "ft_write: |", strlen("ft_write: |"));
	retm = ft_write(ft_open_wrong, s1, strlen(s1));
	write(fd_stdout, "|\n", strlen("|\n"));
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n", BLUE, retm, errno, strerror(errno));
}

void 	test_ft_read(void)
{
	char buf_o[BUF_SIZE];
	char buf_m[BUF_SIZE];
	char buf_op_o[BUF_SIZE];
	char buf_op_m[BUF_SIZE];
	int fd_stdin = 0;
	int fd_open_o = open("./ft_write.s", O_RDONLY);
	int fd_open_m = open("./ft_write.s", O_RDONLY);
	int fd_wrong_1 = -1;
	int fd_wrong_2 = 123;
	int reto, retm;
	printf("                       %s|||||||||||||||||||||||||||||||||||||||\n", YELLOW);
	printf("                       |||          ft_read test:          |||\n");
	printf("                       |||||||||||||||||||||||||||||||||||||||\n");
	errno = 0;
	write(1, GREEN, strlen(GREEN));
	write(1, "read stdin: ", strlen("read stdin: "));
	reto = read(fd_stdin, buf_o, BUF_SIZE);
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n", BLUE, reto, errno, strerror(errno));
	write(1, GREEN, strlen(GREEN));
	write(1, "ft_read stdin: ", strlen("ft_read stdin: "));
	retm = ft_read(fd_stdin, buf_m, BUF_SIZE);
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n\n", BLUE, retm, errno, strerror(errno));

	write(1, GREEN, strlen(GREEN));
	write(1, "read file:    ", strlen("read file:    "));
	reto = read(fd_open_o, buf_op_o, BUF_SIZE);
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n", BLUE, reto, errno, strerror(errno));
	write(1, GREEN, strlen(GREEN));
	write(1, "ft_read file: ", strlen("ft_read file: "));
	retm = ft_read(fd_open_m, buf_op_m, BUF_SIZE);
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n\n", BLUE, retm, errno, strerror(errno));

	write(1, GREEN, strlen(GREEN));
	write(1, "read file:    ", strlen("read file:    "));
	reto = read(fd_wrong_1, buf_op_o, BUF_SIZE);
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n", BLUE, reto, errno, strerror(errno));
	write(1, GREEN, strlen(GREEN));
	write(1, "ft_read file: ", strlen("ft_read file: "));
	retm = ft_read(fd_wrong_1, buf_op_m, BUF_SIZE);
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n\n", BLUE, retm, errno, strerror(errno));

	write(1, GREEN, strlen(GREEN));
	write(1, "read file:    ", strlen("read file:    "));
	reto = read(fd_wrong_2, buf_op_o, BUF_SIZE);
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n", BLUE, reto, errno, strerror(errno));
	write(1, GREEN, strlen(GREEN));
	write(1, "ft_read file: ", strlen("ft_read file: "));
	retm = ft_read(fd_wrong_2, buf_op_m, BUF_SIZE);
	printf("%sreturn: |%d|, errno:|%d|, str:|%s|\n\n", BLUE, retm, errno, strerror(errno));
}

void 	test_ft_strdup(void)
{
	char *s1 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec in efficitur elit. Suspendisse pretium quis libero sed tincidunt. Praesent volutpat, nibh sit amet faucibus faucibus, quam leo tincidunt eros, in mattis magna tellus eu urna. Curabitur facilisis quis ex non ultricies. Suspendisse potenti. Curabitur porta nisi at velit blandit mattis. Nam auctor ligula lectus, in interdum purus bibendum sit amet. Sed volutpat est nec velit tempor laoreet. Vivamus nec nunc nisi. Vivamus faucibus enim magna, tincidunt posuere sem vehicula in. Nulla pellentesque, orci auctor commodo aliquam, nisi lacus tempus ante, sit amet malesuada dui lacus eget purus. Aliquam erat volutpat. Integer rhoncus, massa id luctus imperdiet, massa ipsum volutpat diam, at vulputate lacus ex vitae ligula. Curabitur vehicula vitae turpis quis ultricies. Morbi volutpat, lorem at mattis viverra, nibh dolor accumsan eros, eget mollis turpis dolor ac massa. Nunc et arcu eget urna ornare consequat. In hac habitasse platea dictumst. Nullam rhoncus velit vitae sapien venenatis iaculis. Nullam vitae urna orci. Pellentesque luctus dapibus pulvinar. Donec eu lorem eu elit tincidunt auctor. Mauris euismod justo vel placerat malesuada. Cras condimentum ante lacus. Integer ut magna vitae metus egestas convallis at vel justo. Suspendisse vel tortor id libero tempor pretium. Curabitur id risus at nisi laoreet vulputate egestas quis est. Aliquam ultricies, neque at pulvinar finibus, orci nisi sollicitudin dolor, sed blandit leo purus nec ex. Cras ut metus non lorem auctor rhoncus. In in justo vitae justo posuere facilisis at nec nibh. Duis arcu purus, auctor et ante ut, tempor iaculis erat. Aliquam rhoncus mattis vestibulum. Praesent dictum a nunc vitae semper. Nunc non felis quis nibh bibendum gravida. Cras auctor, ipsum in eleifend bibendum, nulla sapien accumsan ex, sit amet pellentesque dolor erat nec massa. In ultricies tristique sollicitudin. In dapibus est ut velit elementum fringilla. Cras vel velit condimentum, malesuada tortor in, hendrerit justo. Sed blandit, ante vel feugiat rhoncus, tortor massa egestas nisl, eu fermentum dui ex eget urna. Maecenas non accumsan massa. Pellentesque sodales tortor leo, nec suscipit est imperdiet quis. Cras id sapien sed ligula hendrerit ornare. Etiam posuere nibh a turpis elementum, eu dignissim diam vulputate.";
	char *s2 = "Suspendisse vel tortor id libero tempor pretium";
	char *s3 = "Mauris";
	char *s4 = "";
	char *s1_no, *s1_nm;
	char *s2_no, *s2_nm;
	char *s3_no, *s3_nm;
	char *s4_no, *s4_nm;
	printf("                       %s|||||||||||||||||||||||||||||||||||||||\n", YELLOW);
	printf("                       |||          ft_strdup test:        |||\n");
	printf("                       |||||||||||||||||||||||||||||||||||||||\n");
	s1_no = strdup(s1);
	s2_no = strdup(s2);
	s3_no = strdup(s3);
	s4_no = strdup(s4);
	s1_nm = ft_strdup(s1);
	s2_nm = ft_strdup(s2);
	s3_nm = ft_strdup(s3);
	s4_nm = ft_strdup(s4);
	printf("\n%sstrdup:    |%s|\n%sft_strdup: |%s|\n", GREEN, s1_no, BLUE, s1_nm);
	printf("\n%sstrdup:    |%s|\n%sft_strdup: |%s|\n", GREEN, s2_no, BLUE, s2_nm);
	printf("\n%sstrdup:    |%s|\n%sft_strdup: |%s|\n", GREEN, s3_no, BLUE, s3_nm);
	printf("\n%sstrdup:    |%s|\n%sft_strdup: |%s|\n", GREEN, s4_no, BLUE, s4_nm);
	free(s1_no);
	free(s2_no);
	free(s3_no);
	free(s4_no);
	free(s1_nm);
	free(s2_nm);
	free(s3_nm);
	free(s4_nm);
}

void 	test_atoi_base(void)
{
	char *base_b = "01";
	char *base_o = "01234567";
	char *base_h = "0123456789abcdef";
	char *base_s = "314";
	char *base_w1 = "2";
	char *base_w2 = "2113";
	char *base_w3 = "12 4567";
	char *base_w4 = "12+4567";
	printf("                       %s|||||||||||||||||||||||||||||||||||||||\n", YELLOW);
	printf("                       |||          ft_atoi_base test:     |||\n");
	printf("                       |||||||||||||||||||||||||||||||||||||||\n");

	printf("\n%sstr: |%s|, base: |%s|\n%sft_atoi_base: |%d|\n", BLUE, "1000110", base_b, GREEN, ft_atoi_base("1000110", base_b));
	printf("\n%sstr: |%s|, base: |%s|\n%sft_atoi_base: |%d|\n", BLUE, "101", base_b, GREEN, ft_atoi_base("101", base_b));
	printf("\n%sstr: |%s|, base: |%s|\n%sft_atoi_base: |%d|\n", BLUE, "  --+++-10001102111", base_b, GREEN, ft_atoi_base("  --+++-10001102111", base_b));
	printf("\n%sstr: |%s|, base: |%s|\n%sft_atoi_base: |%d|\n", BLUE, " --12301732", base_o, GREEN, ft_atoi_base(" --12301732", base_o));
	printf("\n%sstr: |%s|, base: |%s|\n%sft_atoi_base: |%d|\n", BLUE, "10", base_h, GREEN, ft_atoi_base("10", base_h));
	printf("\n%sstr: |%s|, base: |%s|\n%sft_atoi_base: |%d|\n", BLUE, "1fff", base_h, GREEN, ft_atoi_base("1fff", base_h));
	printf("\n%sstr: |%s|, base: |%s|\n%sft_atoi_base: |%d|\n", BLUE, "  ---+-++-1fa425cc", base_h, GREEN, ft_atoi_base("  ---+-++-1fa425cc", base_h));
	printf("\n%sstr: |%s|, base: |%s|\n%sft_atoi_base: |%d|\n", BLUE, "13334", base_s, GREEN, ft_atoi_base("13334", base_s));
	printf("\n%sstr: |%s|, base: |%s|\n%sft_atoi_base: |%d|\n", BLUE, "22222", base_w1, GREEN, ft_atoi_base("22222", base_w1));
	printf("\n%sstr: |%s|, base: |%s|\n%sft_atoi_base: |%d|\n", BLUE, "  +123", base_w2, GREEN, ft_atoi_base("  +123", base_w2));
	printf("\n%sstr: |%s|, base: |%s|\n%sft_atoi_base: |%d|\n", BLUE, "  --321", base_w3, GREEN, ft_atoi_base("  --321", base_w3));
	printf("\n%sstr: |%s|, base: |%s|\n%sft_atoi_base: |%d|\n", BLUE, "1541", base_w4, GREEN, ft_atoi_base("1541", base_w4));
}

void	test_llists(void)
{
	printf("                       %s|||||||||||||||||||||||||||||||||||||||\n", YELLOW);
	printf("                       |||          linked list tests:     |||\n");
	printf("                       |||||||||||||||||||||||||||||||||||||||\n");
	t_list	*head = NULL;
	t_list	*tmp;

	ft_list_push_front(&head, "789f");
	ft_list_push_front(&head, "hgf");
	ft_list_push_front(&head, "aw1");
	ft_list_push_front(&head, "789f");
	ft_list_push_front(&head, "zzfse");
	ft_list_push_front(&head, "789f");
	ft_list_push_front(&head, "Aw1");
	ft_list_push_front(&head, "211");
	ft_list_push_front(&head, "789f");
	ft_list_push_front(&head, "01123");
	ft_list_push_front(&head, "fgfd");
	ft_list_push_front(&head, "789f");
	printf("\n%sft_list_push_front:\n%s", GREEN, BLUE);
	tmp = head;
	while (head)
	{
		printf("%s\n", head->data);
		head = head->next;
	}
	head = tmp;
	printf("\n%sft_list_size: |%d|\n", GREEN, ft_list_size(head));
	printf("\n%sft_list_sort:\n%s", GREEN, BLUE);
	ft_list_sort(&head, &ft_strcmp);
	tmp = head;
	while (head)
	{
		printf("%s\n", head->data);
		head = head->next;
	}
	head = tmp;
	printf("\n%sft_list_remove_if: |%s|\n%s", GREEN, "789f", BLUE);
	ft_list_remove_if(&head, "789f", &ft_strcmp, &ft_free_node);
	tmp = head;
	while (head)
	{
		printf("%s\n", head->data);
		head = head->next;
	}
	head = tmp;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

void	ft_free_node(void *data)
{
	(void)data;
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		test_ft_strlen();
		test_ft_strcpy();
		test_ft_strcmp();
		test_ft_write();
		test_ft_read();
		test_ft_strdup();
	}
	else if (argc == 2 && !strcmp(argv[1], "bonus"))
	{
		test_atoi_base();
		test_llists();
	}
	else
		printf("Usage: - / <bonus>\n");
	return (0);
}
