// #include <stdio.h>
// int	ft_printf(const char *format, ...);

// int main()
// {
// 	int kek = 0, lol = 0;

// 	printf("\n Проверка вывода \n\n");

// 	kek = ft_printf("1.my_printf: %*i %.*i end\n", 4, 3, 5, 8);
// 	lol = printf("2.or_printf: %*i %.*i end\n", 4, 3, 5, 8);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: --0*%0*.0d*0 0*%0*.10d*0-- \n", -2, 0, 11, 1);
// 	lol = printf("1.or_printf: --0*%0*.0d*0 0*%0*.10d*0-- \n", -2, 0, 11, 1);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf:  %-3.2d %10.42d end\n", 1, -1);
// 	lol = printf("1.my_printf:  %-3.2d %10.42d end\n", 1, -1);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %0--0-0-020.4d end\n", 54678);
// 	lol = printf("2.or_printf: %0--0-0--020.4d end\n", 54678);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-7d end\n", -14);
// 	lol = printf("2.or_printf: %-7d end\n", -14);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-2.8d end\n", 54678);
// 	lol = printf("2.or_printf: %-2.8d end\n", 54678);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %d end\n", 5);
// 	lol = printf("2.or_printf: %d end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %7.3d end\n", -543535);
// 	lol = printf("2.or_printf: %7.3d end\n", -543535);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %7.3d end\n", -5);
// 	lol = printf("2.or_printf: %7.3d end\n", -5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %7.9d end\n", -5);
// 	lol = printf("2.or_printf: %7.9d end\n", -5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-16.9d end\n", -5);
// 	lol = printf("2.or_printf: %-16.9d end\n", -5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %15.9d end\n", -5);
// 	lol = printf("2.or_printf: %15.9d end\n", -5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %15.9d end\n", -54);
// 	lol = printf("2.or_printf: %15.9d end\n", -54);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %5d end\n", -54);
// 	lol = printf("2.or_printf: %5d end\n", -54);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %.5d end\n", -54);
// 	lol = printf("2.or_printf: %.5d end\n", -54);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %.*d end\n", -7, 12345);
// 	lol = printf("2.or_printf: %.*d end\n", -7, 12345);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-d end\n", 5);
// 	lol = printf("2.or_printf: %-d end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-5d end\n", 5);
// 	lol = printf("2.or_printf: %-5d end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %5d end\n", 5);
// 	lol = printf("2.or_printf: %5d end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %05d end\n", 5);
// 	lol = printf("2.or_printf: %05d end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %15d end\n", 5);
// 	lol = printf("2.or_printf: %15d end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %.4d end\n", 5);
// 	lol = printf("2.or_printf: %.4d end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-.7d end\n", 5);
// 	lol = printf("2.or_printf: %-.7d end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %0.7d end\n", 5);
// 	lol = printf("2.or_printf: %0.7d end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %10.5d end\n", 5);
// 	lol = printf("2.or_printf: %10.5d end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-8.4d end\n", 5);
// 	lol = printf("2.or_printf: %-8.4d end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %2.7d end\n", 5);
// 	lol = printf("2.or_printf: %2.7d end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %0.0d end\n", 5);
// 	lol = printf("2.or_printf: %0.0d end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*.5d end\n", 12, 23);
// 	lol = printf("2.or_printf: %*.5d end\n", 12, 23);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-*.*d end\n", 11, 3, 5);
// 	lol = printf("2.or_printf: %-*.*d end\n", 11, 3, 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %.*d end\n", 4, 5);
// 	lol = printf("2.or_printf: %.*d end\n", 4, 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-.*d end\n", 4, 5);
// 	lol = printf("2.or_printf: %-.*d end\n", 4, 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %0.*d end\n", 7, 5);
// 	lol = printf("2.or_printf: %0.*d end\n", 7, 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %d %d end\n", 11, 5);
// 	lol = printf("2.or_printf: %d %d end\n", 11, 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*d %.*d end\n", 4, 3, 5, 8);
// 	lol = printf("2.or_printf: %*d %.*d end\n", 4, 3, 5, 8);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*.*d %.*d end\n", 4, 5, 7, 3, 8);
// 	lol = printf("2.or_printf: %*.*d %.*d end\n", 4, 5, 7, 3, 8);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %.*d %-*d end\n", 7, 5, 13, 3);
// 	lol = printf("2.or_printf: %.*d %-*d end\n", 7, 5, 13, 3);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %.*d %*d end\n", 7, 5, 13, 3);
// 	lol = printf("2.or_printf: %.*d %*d end\n", 7, 5, 13, 3);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %5i end\n", 5);
// 	lol = printf("2.or_printf: %5i end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-i end\n", 5);
// 	lol = printf("2.or_printf: %-i end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-5i end\n", 5);
// 	lol = printf("2.or_printf: %-5i end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %5i end\n", 5);
// 	lol = printf("2.or_printf: %5i end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %05i end\n", 5);
// 	lol = printf("2.or_printf: %05i end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %15i end\n", 5);
// 	lol = printf("2.or_printf: %15i end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %.4i end\n", 5);
// 	lol = printf("2.or_printf: %.4i end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-.7i end\n", 5);
// 	lol = printf("2.or_printf: %-.7i end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %0.7i end\n", 5);
// 	lol = printf("2.or_printf: %0.7i end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %10.5i end\n", 5);
// 	lol = printf("2.or_printf: %10.5i end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-8.4i end\n", 5);
// 	lol = printf("2.or_printf: %-8.4i end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %2.7i end\n", 5);
// 	lol = printf("2.or_printf: %2.7i end\n", 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*.5i end\n", 9, 5);
// 	lol = printf("2.or_printf: %*.5i end\n", 9, 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-*.*i end\n", 11, 3, 5);
// 	lol = printf("2.or_printf: %-*.*i end\n", 11, 3, 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %.*i end\n", 4, 5);
// 	lol = printf("2.or_printf: %.*i end\n", 4, 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %-.*i end\n", 4, 5);
// 	lol = printf("2.or_printf: %-.*i end\n", 4, 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %0.*i end\n", 7, 5);
// 	lol = printf("2.or_printf: %0.*i end\n", 7, 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %i %i end\n", 11, 5);
// 	lol = printf("2.or_printf: %i %i end\n", 11, 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*i %.*i end\n", 4, 3, 5, 8);
// 	lol = printf("2.or_printf: %*i %.*i end\n", 4, 3, 5, 8);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*.*i %.*i end\n", 4, 5, 7, 3, 8);
// 	lol = printf("2.or_printf: %*.*i %.*i end\n", 4, 5, 7, 3, 8);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %.*i %-*i end\n", 7, 5, 13, 3);
// 	lol = printf("2.or_printf: %.*i %-*i end\n", 7, 5, 13, 3);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %.*i %*i end\n", 7, 5, 13, 3);
// 	lol = printf("2.or_printf: %.*i %*i end\n", 7, 5, 13, 3);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %d %i end\n", 11, 5);
// 	lol = printf("2.or_printf: %d %i end\n", 11, 5);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*i %.*d end\n", 4, 3, 5, 8);
// 	lol = printf("2.or_printf: %*i %.*d end\n", 4, 3, 5, 8);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %*.*d %.*i end\n", 4, 5, 7, 3, 8);
// 	lol = printf("2.or_printf: %*.*d %.*i end\n", 4, 5, 7, 3, 8);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %.*d %-*i end\n", 7, 5, 13, 3);
// 	lol = printf("2.or_printf: %.*d %-*i end\n", 7, 5, 13, 3);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);

// 	kek = ft_printf("1.my_printf: %.*i %*d end\n", 7, 5, 13, 3);
// 	lol = printf("2.or_printf: %.*i %*d end\n", 7, 5, 13, 3);
// 	printf("mylen: %d\noriglen: %d\n\n", kek, lol);
// }
