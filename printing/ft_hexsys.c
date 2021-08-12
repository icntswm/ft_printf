#	include "../ft_printf.h"

void	ft_hexsys_upper(unsigned long long n, int fd, t_print *struc)
{
	if (n > 15)
		ft_hexsys_upper(n / 16, fd, &(*struc));
	if ((n % 16) >= 0 && (n % 16) <= 9)
		ft_putchar_sc_fd('0' + (n % 16), fd, &(*struc));
	if ((n % 16) == 10)
		ft_putchar_sc_fd('A', fd, &(*struc));
	if ((n % 16) == 11)
		ft_putchar_sc_fd('B', fd, &(*struc));
	if ((n % 16) == 12)
		ft_putchar_sc_fd('C', fd, &(*struc));
	if ((n % 16) == 13)
		ft_putchar_sc_fd('D', fd, &(*struc));
	if ((n % 16) == 14)
		ft_putchar_sc_fd('E', fd, &(*struc));
	if ((n % 16) == 15)
		ft_putchar_sc_fd('F', fd, &(*struc));
}

void	ft_hexsys_lower(unsigned long long n, int fd, t_print *struc)
{
	if (n > 15)
		ft_hexsys_lower(n / 16, fd, &(*struc));
	if ((n % 16) >= 0 && (n % 16) <= 9)
		ft_putchar_sc_fd('0' + (n % 16), fd, &(*struc));
	if ((n % 16) == 10)
		ft_putchar_sc_fd('a', fd, &(*struc));
	if ((n % 16) == 11)
		ft_putchar_sc_fd('b', fd, &(*struc));
	if ((n % 16) == 12)
		ft_putchar_sc_fd('c', fd, &(*struc));
	if ((n % 16) == 13)
		ft_putchar_sc_fd('d', fd, &(*struc));
	if ((n % 16) == 14)
		ft_putchar_sc_fd('e', fd, &(*struc));
	if ((n % 16) == 15)
		ft_putchar_sc_fd('f', fd, &(*struc));
}

void	ft_hexsys(int type, unsigned long long n, int fd, t_print *struc)
{
	if (type == 'x' || type == 'p')
		ft_hexsys_lower(n, fd, &(*struc));
	if (type == 'X')
		ft_hexsys_upper(n, fd, &(*struc));
}
