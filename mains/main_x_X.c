// #include <stdio.h>
// int	ft_printf(const char *format, ...);

// int main()
// {
// 	int kek = 0, lol = 0;

// 	printf("\n Проверка вывода \n\n");

// 	kek = ft_printf("1.my_printf: %15.2x %*.4x %5.*x end\n", -24, 21, 6, 5, 45);
// 	lol = printf("2.or_printf: %15.2x %*.4x %5.*x end\n", -24, 21, 6, 5, 45);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %3x end\n", 0);
// 	lol = printf("2.or_printf: %3x end\n", 0);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-10.20x end\n", 12345);
// 	lol = printf("2.or_printf: %-10.20x end\n", 12345);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %10.20X end\n", 565656);
// 	lol = printf("2.or_printf: %10.20X end\n", 565656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-30.20x end\n", 333333);
// 	lol = printf("2.or_printf: %-30.20x end\n", 333333);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %10.4x end\n", 44444);
// 	lol = printf("2.or_printf: %10.4x end\n", 44444);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-11.18X end\n", 5656);
// 	lol = printf("2.or_printf: %-11.18X end\n", 5656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %2.4x end\n", 565656);
// 	lol = printf("2.or_printf: %2.4x end\n", 565656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-10.4x end\n", 123);
// 	lol = printf("2.or_printf: %-10.4x end\n", 123);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-2.4x end\n", 565656);
// 	lol = printf("2.or_printf: %-2.4x end\n", 565656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-2.4x %-13.9x %-7.3x end\n", 56, 765, -2332);
// 	lol = printf("2.or_printf: %-2.4x %-13.9x %-7.3x end\n", 56, 765, -2332);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %2.4x %13.9x %7.3x end\n", 5, 743, -2356);
// 	lol = printf("2.or_printf: %2.4x %13.9x %7.3x end\n", 5, 743, -2356);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %13.11x %-16.4x %02.17x end\n", 13, 3, -56);
// 	lol = printf("2.or_printf: %13.11x %-16.4x %02.17x end\n", 13, 3, -56);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %18.11X %-1.4X %02.19X end\n", 43, 234, -22);
// 	lol = printf("2.or_printf: %18.11X %-1.4X %02.19X end\n", 43, 234, -22);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %2.4x %13.9x %-14.3x end\n", 37, 763, -32);
// 	lol = printf("2.or_printf: %2.4x %13.9x %-14.3x end\n", 37, 763, -32);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*.20X end\n", 11, 565656);
// 	lol = printf("2.or_printf: %*.20X end\n", 11, 565656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-10.*x end\n", 14, 565656);
// 	lol = printf("2.or_printf: %-10.*x end\n", 14, 565656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-*.*x end\n", 27, 15, 565656);
// 	lol = printf("2.or_printf: %-*.*x end\n", 27, 15, 565656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*.*x %13.9X %7.*x end\n", 1, 1, 6, 3, 8, -2);
// 	lol = printf("2.or_printf: %*.*x %13.9X %7.*x end\n", 1, 1, 6, 3, 8, -2);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %010.20x end\n", 565656);
// 	lol = printf("2.or_printf: %010.20x end\n", 565656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %030.20x end\n", 565656);
// 	lol = printf("2.or_printf: %030.20x end\n", 565656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %010.4X end\n", 565656);
// 	lol = printf("2.or_printf: %010.4X end\n", 565656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %010.4x end\n", 565656);
// 	lol = printf("2.or_printf: %010.4x end\n", 565656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %02.4X %23.13x end\n", 565656, 25);
// 	lol = printf("2.or_printf: %02.4X %23.13x end\n", 565656, 25);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %30x end\n", 565656);
// 	lol = printf("2.or_printf: %30x end\n", 565656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %030x end\n", 565656);
// 	lol = printf("2.or_printf: %030x end\n", 565656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %3x end\n", 565656);
// 	lol = printf("2.or_printf: %3x end\n", 565656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-10x end\n", 565656);
// 	lol = printf("2.or_printf: %-10x end\n", 565656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %.20X end\n", 565656);
// 	lol = printf("2.or_printf: %.20X end\n", 565656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %.3x end\n", 565656);
// 	lol = printf("2.or_printf: %.3x end\n", 565656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-.20X end\n", 565656);
// 	lol = printf("2.or_printf: %-.20X end\n", 565656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-.3x end\n", 56578656);
// 	lol = printf("2.or_printf: %-.3x end\n", 56578656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %0.20X end\n", 5658656);
// 	lol = printf("2.or_printf: %0.20X end\n", 5658656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %0.3x end\n", 5656156);
// 	lol = printf("2.or_printf: %0.3x end\n", 5656156);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %x end\n", 565656);
// 	lol = printf("2.or_printf: %x end\n", 565656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-X end\n", 565656);
// 	lol = printf("2.or_printf: %-x end\n", 565656);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %0x end\n", 56566);
// 	lol = printf("2.or_printf: %0x end\n", 56566);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %x %15.9X end\n", 125656, 23);
// 	lol = printf("2.or_printf: %x %15.9X end\n", 125656, 23);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-x %-19.3x end\n", 75656, 23);
// 	lol = printf("2.or_printf: %-x %-19.3x end\n", 75656, 23);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*.3x end\n", -16, 5656156);
// 	lol = printf("2.or_printf: %*.3x end\n", -16,  5656156);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);
// }
