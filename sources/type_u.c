#	include "../ft_printf.h"

void	u_hdot_hprecision(t_print *struc, t_output *output, int len_str)
{
	if ((*struc).pre > len_str && (*struc).pre > 0)
	{
		output->sum_zero = (*struc).pre - len_str;
		output->sum_space = (*struc).width - (*struc).pre;
	}
	else if ((*struc).pre <= len_str && (*struc).pre > 0)
		output->sum_space = (*struc).width - len_str;
	else if ((*struc).pre < 0)
	{
		if ((*struc).width > len_str && (*struc).zero == 0)
			output->sum_space = (*struc).width - len_str;
		else if ((*struc).width > len_str && (*struc).zero == 1)
		{
			if ((*output).num_f_u < 0)
				output->sum_zero = (*struc).width - len_str - 1;
			else
				output->sum_zero = (*struc).width - len_str;
		}
	}
}

void	u_width_more_precision(t_print *struc, t_output *output, int len_str)
{
	if ((*struc).dot == 1 && (*struc).pre != 0)
		u_hdot_hprecision(&(*struc), &(*output), len_str);
	else if ((*struc).dot == 1 && (*struc).pre == 0)
	{
		if ((*output).num_f_u == 0)
			output->sum_space = (*struc).width;
		else
			output->sum_space = (*struc).width - len_str;
	}
	else if ((*struc).dot == 0 && (*struc).zero == 1)
	{
		if ((*output).num_f_u < 0)
			output->sum_zero = (*struc).width - len_str - 1;
		else
			output->sum_zero = (*struc).width - len_str;
	}
	else if ((*struc).dot == 0 && (*struc).zero == 0)
		output->sum_space = (*struc).width - len_str;
}

void	parser_u(t_print *struc, t_output *output)
{
	int		len_str;

	len_str = 0;
	output->num_f_u = va_arg((*struc).ap, unsigned int);
	output->string = ft_itoa_conv_unsigned((*output).num_f_u, &(*struc));
	len_str = ft_strlen((*output).string);
	if ((*struc).width > (*struc).pre)
		u_width_more_precision(&(*struc), &(*output), len_str);
	else
	{
		if ((*struc).dot == 1 && (*struc).pre != 0)
		{
			if (((*struc).pre > len_str) && ((*struc).width > len_str))
				output->sum_zero = (*struc).pre - len_str;
			else if (((*struc).pre > len_str) && ((*struc).width <= len_str))
				output->sum_zero = (*struc).pre - len_str;
		}
		else if ((*struc).dot == 0 && (*struc).zero == 0)
			output->sum_space = (*struc).width - len_str;
		else if ((*struc).dot == 0 && (*struc).zero == 1)
			output->sum_zero = (*struc).width - len_str;
	}
}

void	type_u(t_print *struc, t_output *output)
{
	parser_u(&(*struc), &(*output));
	if ((*struc).minus == 0)
		ft_put_len(1, ' ', (*output).sum_space, &(*struc));
	ft_put_len(1, '0', (*output).sum_zero, &(*struc));
	if ((*struc).pre > 0)
		ft_putstr_sc_fd((*output).string, 1, &(*struc));
	else
	{
		if ((*struc).pre != 0)
			ft_putstr_sc_fd((*output).string, 1, &(*struc));
		else
		{
			if ((*output).num_f_u != 0)
				ft_putstr_sc_fd((*output).string, 1, &(*struc));
			else if ((*struc).dot == 0 && (*output).num_f_u == 0)
				ft_putchar_sc_fd('0', 1, &(*struc));
		}
	}
	if ((*struc).minus == 1)
		ft_put_len(1, ' ', (*output).sum_space, &(*struc));
	if ((*struc).check_malloc == 1)
		free((*output).string);
}
