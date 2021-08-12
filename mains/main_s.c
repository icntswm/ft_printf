// #include <stdio.h>
// int	ft_printf(const char *format, ...);

// int main()
// {
// 	int kek = 0, lol = 0;

// 	printf("\n Проверка вывода \n\n");

// 	kek = ft_printf("1.my_printf: %-8s end\n", "hello");
// 	lol = printf("2.or_printf: %-8s end\n", "hello");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*s end\n", -32, "abc");
// 	lol = printf("2.or_printf: %*s end\n", -32, "abc");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %8.2s end\n", "hello");
// 	lol = printf("2.or_printf: %8.2s end\n", "hello");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %8.2s end\n", "hello");
// 	lol = printf("2.or_printf: %8.2s end\n", "hello");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %30.35s end\n", "hello");
// 	lol = printf("2.or_printf: %30.35s end\n", "hello");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %30.35s end\n", "hello|hello|hello|hello");
// 	lol = printf("2.or_printf: %30.35s end\n", "hello|hello|hello|hello");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-4.8s end\n", "hello world");
// 	lol = printf("2.or_printf: %-4.8s end\n", "hello world");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %4.8s end\n", "hello world");
// 	lol = printf("2.or_printf: %4.8s end\n", "hello world");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-.2s end\n", "hello world");
// 	lol = printf("2.or_printf: %-.2s end\n", "hello world");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-*.2s end\n", 8, "hello world");
// 	lol = printf("2.or_printf: %-*.2s end\n", 8, "hello world");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*.2s end\n", 8, "hello world");
// 	lol = printf("2.or_printf: %*.2s end\n", 8, "hello world");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-3.*s end\n", 1, "hello world");
// 	lol = printf("2.or_printf: %-3.*s end\n", 1, "hello world");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-*.*s end\n", 8, 3, "hello world");
// 	lol = printf("2.or_printf: %-*.*s end\n", 8, 3, "hello world");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*.*s end\n", 8, 3, "hello world");
// 	lol = printf("2.or_printf: %*.*s end\n", 8, 3, "hello world");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-8s %-8s end\n", "hello", "world");
// 	lol = printf("2.or_printf: %-8s %-8s end\n", "hello", "world");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %8s %8s end\n", "hello", "world");
// 	lol = printf("2.or_printf: %8s %8s end\n", "hello", "world");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-8.2s %-8.2s end\n", "hello", "world");
// 	lol = printf("2.or_printf: %-8.2s %-8.2s end\n", "hello", "world");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %8.2s %8.2s end\n", "hello", "world");
// 	lol = printf("2.or_printf: %8.2s %8.2s end\n", "hello", "world");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-4.8s %-4.8s end\n", "hello", "world");
// 	lol = printf("2.or_printf: %-4.8s %-4.8s end\n", "hello", "world");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %4.8s %4.8s end\n", "hello", "world");
// 	lol = printf("2.or_printf: %4.8s %4.8s end\n", "hello", "world");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-.2s %-.2s end\n", "hello", "world");
// 	lol = printf("2.or_printf: %-.2s %-.2s end\n", "hello", "world");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-*.2s %-*.2s end\n", 8, "hello", 4, "world");
// 	lol = printf("2.or_printf: %-*.2s %-*.2s end\n", 8, "hello", 4, "world");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*.2s %*.2s end\n", 8, "hello", 3, "world");
// 	lol = printf("2.or_printf: %*.2s %*.2s end\n", 8, "hello", 3, "world");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-3.*s %-3.*s end\n", 1, "good", 3, "day");
// 	lol = printf("2.or_printf: %-3.*s %-3.*s end\n", 1, "good", 3, "day");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-*.*s %-*.*s end\n", 8, 3, "Hi", 9, 2, "Po");
// 	lol = printf("2.or_printf: %-*.*s %-*.*s end\n", 8, 3, "Hi", 9, 2, "Po");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*.*s %*.*s end\n", 8, 3, "Hi", 2, 4, "Po");
// 	lol = printf("2.or_printf: %*.*s %*.*s end\n", 8, 3, "Hi", 2, 4, "Po");
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);
// }
