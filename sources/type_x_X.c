#	include "../ft_printf.h"

void	x_X_hdot_hprecision(t_print *struc, t_output *output, int hex_len)
{
	if ((*struc).pre > hex_len && (*struc).pre > 0)
	{
		output->sum_space = (*struc).width - (*struc).pre;
		output->sum_zero = (*struc).pre - hex_len;
	}
	else if ((*struc).pre <= hex_len && (*struc).pre > 0)
		output->sum_space = (*struc).width - hex_len;
	else if ((*struc).pre < 0)
	{
		if ((*struc).width > hex_len && (*struc).zero == 0)
			output->sum_space = (*struc).width - hex_len;
		else if ((*struc).width > hex_len && (*struc).zero == 1)
			output->sum_zero = (*struc).width - hex_len;
	}
}

void	x_X_width_more_precision(t_print *struc, t_output *output, int hex_len)
{
	if ((*struc).dot == 1 && (*struc).pre != 0)
		x_X_hdot_hprecision(&(*struc), &(*output), hex_len);
	else if ((*struc).dot == 1 && (*struc).pre == 0)
	{
		if ((*output).num_f_x == 0)
			output->sum_space = (*struc).width;
		else
			output->sum_space = (*struc).width - hex_len;
	}
	else if ((*struc).dot == 0 && (*struc).zero == 0)
		output->sum_space = (*struc).width - hex_len;
	else if ((*struc).dot == 0 && (*struc).zero == 1)
	{
		if ((*output).num_f_x == 0)
			output->sum_zero = (*struc).width - 1;
		else
			output->sum_zero = (*struc).width - hex_len;
	}
}

void	parser_x_X(t_print *struc, t_output *output)
{
	int		hex_len;

	hex_len = 0;
	output->num_f_x = va_arg((*struc).ap, unsigned int);
	hex_len = ft_hexcounter((*output).num_f_x, 1);
	if ((*struc).width > (*struc).pre)
		x_X_width_more_precision(&(*struc), &(*output), hex_len);
	else
	{
		if ((*struc).dot == 1 && (*struc).pre != 0)
		{
			if ((*struc).pre > hex_len && (*struc).width > hex_len)
				output->sum_zero = (*struc).pre - hex_len;
			else if ((*struc).pre > hex_len && (*struc).width <= hex_len)
				output->sum_zero = (*struc).pre - hex_len;
		}
	}
}

void	type_x_X(int type, t_print *struc, t_output *output)
{
	parser_x_X(&(*struc), &(*output));
	if ((*struc).minus == 0)
		ft_put_len(1, ' ', (*output).sum_space, &(*struc));
	ft_put_len(1, '0', (*output).sum_zero, &(*struc));
	if ((*struc).pre != 0)
		ft_hexsys(type, (*output).num_f_x, 1, &(*struc));
	else
	{
		if ((*output).num_f_x != 0)
			ft_hexsys(type, (*output).num_f_x, 1, &(*struc));
		else if ((*struc).dot == 0 && (*output).num_f_x == 0)
			ft_putchar_sc_fd('0', 1, &(*struc));
	}
	if ((*struc).minus == 1)
		ft_put_len(1, ' ', (*output).sum_space, &(*struc));
}
