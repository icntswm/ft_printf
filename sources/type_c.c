#	include "../ft_printf.h"

void	parser_c(t_print *struc, t_output *output)
{
	output->symbol = (unsigned char)va_arg((*struc).ap, int);
	if ((*struc).width > 1)
		output->sum_space = (*struc).width - 1;
	else
		output->sum_space = 0;
}

void	type_c(t_print *struc, t_output *output)
{
	parser_c(&(*struc), &(*output));
	if ((*struc).minus == 0)
	{
		ft_put_len(1, ' ', (*output).sum_space, &(*struc));
		ft_putchar_sc_fd((*output).symbol, 1, &(*struc));
	}
	else
	{
		ft_putchar_sc_fd((*output).symbol, 1, &(*struc));
		ft_put_len(1, ' ', (*output).sum_space, &(*struc));
	}
}
