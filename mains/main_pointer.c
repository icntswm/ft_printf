// #include <stdio.h>
// int	ft_printf(const char *format, ...);

// int main()
// {
// 	int kek = 0, lol = 0;
// 	char *a; int *b;

// 	printf("\n Проверка вывода \n\n");

// 	kek = ft_printf("1.my_printf: %p end\n", &a);
// 	lol = printf("2.or_printf: %p end\n", &a);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %.p\n", NULL);
// 	lol = printf("2.or_printf: %.p\n\n", NULL);

// 	kek = ft_printf("1.my_printf: %.*p\n", -3, NULL);
// 	lol = printf("2.or_printf: %.*p\n\n", -3, NULL);

// 	kek = ft_printf("1.my_printf: %20.15p end\n", &a);
// 	lol = printf("2.or_printf: %20.15p end\n", &a);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-4p end\n", &b);
// 	lol = printf("2.or_printf: %-4p end\n", &b);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %24p end\n", &b);
// 	lol = printf("2.or_printf: %24p end\n", &b);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %p end\n", &a);
// 	lol = printf("2.or_printf: %p end\n", &a);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-*p end\n", 18, &b);
// 	lol = printf("2.or_printf: %-*p end\n", 18, &b);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*p end\n", 5, &a);
// 	lol = printf("2.or_printf: %*p end\n", 5, &a);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*p end\n", -25, &a);
// 	lol = printf("2.or_printf: %*p end\n", -25, &a);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*p %p end\n", 31, &a, &b);
// 	lol = printf("2.or_printf: %*p %p end\n", 31, &a, &b);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*p %-*p end\n", 17, &a, 23, &a);
// 	lol = printf("2.or_printf: %*p %-*p end\n", 17, &a, 23, &a);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);
// }
