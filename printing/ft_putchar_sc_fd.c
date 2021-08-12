#	include "../ft_printf.h"

void	ft_putchar_sc_fd(char c, int fd, t_print *struc)
{
	write(fd, &c, 1);
	struc->len_str += 1;
}
