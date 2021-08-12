#	include "../ft_printf.h"

void	ft_printer_string(char *s, int precision, t_print *struc)
{
	int	i;

	i = 0;
	while (s[i] && i < precision)
	{
		write(1, &s[i], 1);
		struc->len_str += 1;
		i++;
	}
}
