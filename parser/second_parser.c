#	include "../ft_printf.h"

void	second_parser(t_print *struc)
{
	if ((*struc).width == 0)
	{
		if ((*struc).w_star == 1)
			struc->width = va_arg((*struc).ap, int);
	}
	if ((*struc).width < 0)
	{
		struc->minus = 1;
		struc->zero = 0;
		struc->width *= -1;
	}
	if ((*struc).pre == 0)
	{
		if ((*struc).p_star != 0)
			struc->pre = va_arg((*struc).ap, int);
	}
}
