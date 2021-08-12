#	include "../ft_printf.h"

void	parser_percent(t_print *struc, t_output *output)
{
	if ((*struc).width > 1 && (*struc).zero == 0)
	{
		output->sum_space = (*struc).width - 1;
		output->sum_zero = 0;
	}
	else if ((*struc).width > 1 && (*struc).zero == 1)
	{
		output->sum_space = 0;
		output->sum_zero = (*struc).width - 1;
	}
	else if ((*struc).width <= 1)
	{
		output->sum_space = 0;
		output->sum_zero = 0;
	}
}

void	type_percent(t_print *struc, t_output *output)
{
	second_parser(&(*struc));
	parser_percent(&(*struc), &(*output));
	if ((*struc).minus == 0)
	{
		ft_put_len(1, ' ', (*output).sum_space, &(*struc));
		ft_put_len(1, '0', (*output).sum_zero, &(*struc));
		ft_putchar_sc_fd('%', 1, &(*struc));
	}
	else
	{
		ft_put_len(1, '0', (*output).sum_zero, &(*struc));
		ft_putchar_sc_fd('%', 1, &(*struc));
		ft_put_len(1, ' ', (*output).sum_space, &(*struc));
	}
}
