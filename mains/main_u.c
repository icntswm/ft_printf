// #include <stdio.h>
// int	ft_printf(const char *format, ...);

// int main()
// {
// 	int kek = 0, lol = 0;

// 	printf("\n Проверка вывода \n\n");

// 	kek = ft_printf("1.my_printf: %15.7u end\n",  777777);
// 	lol = ft_printf("2.or_printf: %15.7u end\n",  777777);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %20.15u end\n", 1234);
// 	lol = ft_printf("2.or_printf: %20.15u end\n", 1234);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %0*u end\n", -15, 1234);
// 	lol = ft_printf("2.or_printf: %0*u end\n", -15, 1234);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-20.25u end\n", 11111);
// 	lol = ft_printf("2.or_printf: %-20.25u end\n", 11111);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %20.25u end\n", 32);
// 	lol = ft_printf("2.or_printf: %20.25u end\n", 32);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %020.25u end\n", 432);
// 	lol = ft_printf("2.or_printf: %020.25u end\n", 432);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %5.25u end\n", 1);
// 	lol = ft_printf("2.or_printf: %5.25u end\n", 1);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-5.25u end\n", 444);
// 	lol = ft_printf("2.or_printf: %-5.25u end\n", 444);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*.25u end\n", 7, 1111);
// 	lol = ft_printf("2.or_printf: %*.25u end\n", 7, 1111);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-5.*u end\n", 20, 2);
// 	lol = ft_printf("2.or_printf: %-5.*u end\n", 20, 2);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-*.*u end\n", 8, 20, 44);
// 	lol = ft_printf("2.or_printf: %-*.*u end\n", 8, 20, 44);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %20u end\n", 22);
// 	lol = ft_printf("2.or_printf: %20u end\n", 22);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-20u end\n", 123);
// 	lol = ft_printf("2.or_printf: %-20u end\n", 123);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %020u end\n", 534545);
// 	lol = ft_printf("2.or_printf: %020u end\n", 534545);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*u end\n", 7, 321);
// 	lol = ft_printf("2.or_printf: %*u end\n", 7, 321);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %.10u end\n", 123);
// 	lol = ft_printf("2.or_printf: %.10u end\n", 123);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-.10u end\n", 333);
// 	lol = ft_printf("2.or_printf: %-.10u end\n", 333);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %0.10u end\n", 1);
// 	lol = ft_printf("2.or_printf: %0.10u end\n", 1);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %0.2u end\n", 21);
// 	lol = ft_printf("2.or_printf: %0.2u end\n", 21);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-.*u end\n", 30, 42);
// 	lol = ft_printf("2.or_printf: %-.*u end\n", 30, 42);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-u end\n", 22);
// 	lol = ft_printf("2.or_printf: %-u end\n", 22);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %u end\n", 12);
// 	lol = ft_printf("2.or_printf: %u end\n", 12);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %0u end\n", 11);
// 	lol = ft_printf("2.or_printf: %0u end\n", 11);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %u end\n", 7);
// 	lol = ft_printf("2.or_printf: %u end\n", 7);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-20.15u end\n", -23);
// 	lol = ft_printf("2.or_printf: %-20.15u end\n", -23);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %30.5u end\n", -21);
// 	lol = ft_printf("2.or_printf: %30.5u end\n", -21);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %030.15u end\n", -55555);
// 	lol = ft_printf("2.or_printf: %030.15u end\n", -55555);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-20.25u end\n", -2222);
// 	lol = ft_printf("2.or_printf: %-20.25u end\n", -2222);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %20.25u end\n", -111);
// 	lol = ft_printf("2.or_printf: %20.25u end\n", -111);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %020.25u end\n", -12);
// 	lol = ft_printf("2.or_printf: %020.25u end\n", -12);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %5.25u end\n", -534545);
// 	lol = ft_printf("2.or_printf: %5.25u end\n", -534545);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-5.25u end\n", -534545);
// 	lol = ft_printf("2.or_printf: %-5.25u end\n", -534545);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*.25u end\n", 7, -534545);
// 	lol = ft_printf("2.or_printf: %*.25u end\n", 7, -534545);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-5.*u end\n", 20, -534545);
// 	lol = ft_printf("2.or_printf: %-5.*u end\n", 20, -534545);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-*.*u end\n", 8, 20, -534545);
// 	lol = ft_printf("2.or_printf: %-*.*u end\n", 8, 20, -534545);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %20u end\n", -534545);
// 	lol = ft_printf("2.or_printf: %20u end\n", -534545);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-20u end\n", -534545);
// 	lol = ft_printf("2.or_printf: %-20u end\n", -534545);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %020u end\n", -534545);
// 	lol = ft_printf("2.or_printf: %020u end\n", -534545);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*u end\n", 10, -534545);
// 	lol = ft_printf("2.or_printf: %*u end\n", 10, -534545);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %.25u end\n", -534545);
// 	lol = ft_printf("2.or_printf: %.25u end\n", -534545);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-.25u end\n", -534545);
// 	lol = ft_printf("2.or_printf: %-.25u end\n", -534545);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %0.25u end\n", -534545);
// 	lol = ft_printf("2.or_printf: %0.25u end\n", -534545);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %0.2u end\n", -534545);
// 	lol = ft_printf("2.or_printf: %0.2u end\n", -534545);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %.*u end\n", 13, -534545);
// 	lol = ft_printf("2.or_printf: %.*u end\n", 13, -534545);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-u end\n", -534545);
// 	lol = ft_printf("2.or_printf: %-u end\n", -534545);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %u end\n", -123456);
// 	lol = ft_printf("2.or_printf: %u end\n", -123456);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %0u end\n", -534545);
// 	lol = ft_printf("2.or_printf: %0u end\n", -534545);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %u end\n", -7);
// 	lol = ft_printf("2.or_printf: %u end\n", -7);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-u end\n", -4545);
// 	lol = ft_printf("2.or_printf: %-u end\n", -4545);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %u end\n", -53445);
// 	lol = ft_printf("2.or_printf: %u end\n", -53445);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %0u end\n", -777777);
// 	lol = ft_printf("2.or_printf: %0u end\n", -777777);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %5u end\n", 0);
// 	lol = ft_printf("2.or_printf: %5u end\n", 0);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);
// }
