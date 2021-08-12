#	include "../ft_printf.h"

void	ft_putstr_sc_fd(char *s, int fd, t_print *struc)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		struc->len_str += 1;
		i++;
	}
}
