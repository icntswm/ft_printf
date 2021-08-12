#	include "../ft_printf.h"

void	d_i_hdot_hprecision(t_output *output, t_print *struc, int len_str)
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
			if ((*output).num_f_di < 0)
				output->sum_zero = (*struc).width - len_str - 1;
			else
				output->sum_zero = (*struc).width - len_str;
		}
	}
}

void	d_i_width_more_precision(t_output *output, t_print *struc, int len_str)
{
	if ((*struc).dot == 1 && (*struc).pre != 0)
		d_i_hdot_hprecision(&(*output), &(*struc), len_str);
	else if ((*struc).dot == 1 && (*struc).pre == 0)
	{
		if ((*output).num_f_di == 0)
			output->sum_space = (*struc).width;
		else
			output->sum_space = (*struc).width - len_str;
	}
	else if ((*struc).dot == 0 && (*struc).zero == 1)
	{
		if ((*output).num_f_di < 0)
			output->sum_zero = (*struc).width - len_str - 1;
		else
			output->sum_zero = (*struc).width - len_str;
	}
	else if ((*struc).dot == 0 && (*struc).zero == 0)
		output->sum_space = (*struc).width - len_str;
}

void	parser_d_i(t_print *struc, t_output *output)
{
	int		len_str;

	len_str = 0;
	output->num_f_di = va_arg((*struc).ap, int);
	output->string = ft_itoa_conv((*output).num_f_di, &(*struc));
	len_str = ft_strlen((*output).string);
	if ((*struc).width > (*struc).pre)
		d_i_width_more_precision(&(*output), &(*struc), len_str);
	else
	{
		if ((*struc).dot == 1 && (*struc).pre != 0)
		{
			if ((*struc).pre > len_str && (*struc).width > len_str)
				output->sum_zero = (*struc).pre - len_str;
			else if ((*struc).pre > len_str && (*struc).width <= len_str)
				output->sum_zero = (*struc).pre - len_str;
		}
		else if ((*struc).dot == 0 && (*struc).zero == 0)
			output->sum_space = (*struc).width - len_str;
		else if ((*struc).dot == 0 && (*struc).zero == 1)
			output->sum_zero = (*struc).width - len_str;
	}
}

void	minus_zero_string(t_output *output, t_print *struc)
{
	if ((*output).num_f_di < 0)
		ft_putchar_sc_fd('-', 1, &(*struc));
	ft_put_len(1, '0', (*output).sum_zero, &(*struc));
	if ((*struc).pre > 0)
		ft_putstr_sc_fd((*output).string, 1, &(*struc));
	else
	{
		if ((*struc).pre != 0)
			ft_putstr_sc_fd((*output).string, 1, &(*struc));
		else
		{
			if ((*output).num_f_di != 0)
				ft_putstr_sc_fd((*output).string, 1, &(*struc));
			else if ((*struc).dot == 0 && (*output).num_f_di == 0)
				ft_putchar_sc_fd('0', 1, &(*struc));
		}
	}
}

void	type_d_i(t_print *struc, t_output *output)
{
	parser_d_i(&(*struc), &(*output));
	if ((*struc).minus == 0)
	{
		if ((*output).num_f_di < 0)
			ft_put_len(1, ' ', (*output).sum_space - 1, &(*struc));
		else
			ft_put_len(1, ' ', (*output).sum_space, &(*struc));
	}
	minus_zero_string(&(*output), &(*struc));
	if ((*struc).minus == 1)
	{
		if ((*output).num_f_di < 0)
			ft_put_len(1, ' ', (*output).sum_space - 1, &(*struc));
		else
			ft_put_len(1, ' ', (*output).sum_space, &(*struc));
	}
	if ((*struc).check_malloc == 1)
		free((*output).string);
}
