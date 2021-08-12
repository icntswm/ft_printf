#	include "../ft_printf.h"

void	p_width_wore_precision(t_print *struc, t_output *output, int hex_len)
{
	if ((*struc).dot == 1 && (*struc).pre != 0)
	{
		if ((*struc).pre > hex_len)
		{
			output->sum_space = (*struc).width - (*struc).pre - 2;
			output->sum_zero = (*struc).pre - hex_len;
		}
		else
			output->sum_space = (*struc).width - hex_len - 2;
	}
	else if ((*struc).dot == 1 && (*struc).pre == 0)
		output->sum_space = (*struc).width - hex_len - 2;
	else if ((*struc).dot == 0 && (*struc).zero == 0)
		output->sum_space = (*struc).width - hex_len - 2;
	else if ((*struc).dot == 0 && (*struc).zero == 1)
		output->sum_zero = (*struc).width - hex_len - 2;
}

void	parser_pointer(t_print *struc, t_output *output)
{
	int		hex_len;

	hex_len = 0;
	output->num_f_p = va_arg((*struc).ap, unsigned long long);
	if ((((*output).num_f_p == 0 && (*struc).dot == 0)
			|| ((*output).num_f_p == 0 && (*struc).pre != 0))
		|| ((*output).num_f_p != 0))
		hex_len = ft_hexcounter((*output).num_f_p, 1);
	if ((*struc).width > (*struc).pre)
		p_width_wore_precision(&(*struc), &(*output), hex_len);
	else
	{
		if ((*struc).dot == 1 && (*struc).pre != 0)
		{
			if ((*struc).pre > hex_len && (*struc).width > hex_len)
				output->sum_zero = (*struc).pre - hex_len - 2;
			else if ((*struc).pre > hex_len && (*struc).width <= hex_len)
				output->sum_zero = (*struc).pre - hex_len - 2;
		}
	}
}

void	type_pointer(int type, t_print *struc, t_output *output)
{
	parser_pointer(&(*struc), &(*output));
	if ((*struc).minus == 0)
	{
		ft_put_len(1, ' ', (*output).sum_space, &(*struc));
		ft_putstr_sc_fd("0x", 1, &(*struc));
		ft_put_len(1, '0', (*output).sum_zero, &(*struc));
		if ((((*output).num_f_p == 0 && (*struc).dot == 0)
				|| ((*output).num_f_p == 0 && (*struc).pre != 0))
			|| ((*output).num_f_p != 0))
			ft_hexsys(type, (*output).num_f_p, 1, &(*struc));
	}
	else
	{
		ft_putstr_sc_fd("0x", 1, &(*struc));
		ft_put_len(1, '0', (*output).sum_zero, &(*struc));
		if ((((*output).num_f_p == 0 && (*struc).dot == 0)
				|| ((*output).num_f_p == 0 && (*struc).pre != 0))
			|| ((*output).num_f_p != 0))
			ft_hexsys(type, (*output).num_f_p, 1, &(*struc));
		ft_put_len(1, ' ', (*output).sum_space, &(*struc));
	}
}
