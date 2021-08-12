#	include "../ft_printf.h"

void	ft_put_len(int fd, char c, int width, t_print *struc)
{
	int	i;

	i = 0;
	while (i < width)
	{
		write(fd, &c, 1);
		struc->len_str += 1;
		i++;
	}
}
