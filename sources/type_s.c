#	include "../ft_printf.h"

void	s_width_more_precision(t_print *struc, t_output *output)
{
	if ((*struc).dot == 1 && (*struc).pre != 0)
	{
		if ((size_t)(*struc).pre > ft_strlen((*output).string))
			output->sum_space = (*struc).width - ft_strlen((*output).string);
		else
			output->sum_space = (*struc).width - (*struc).pre;
	}
	else if ((*struc).dot == 1 && (*struc).pre == 0)
		output->sum_space = (*struc).width;
	else if ((*struc).dot == 0)
		output->sum_space = (*struc).width - ft_strlen((*output).string);
}

void	parser_s(t_print *struc, t_output *output)
{
	output->string = va_arg((*struc).ap, char *);
	if ((*output).string == NULL)
		output->string = "(null)";
	if ((*struc).width > (*struc).pre)
		s_width_more_precision(&(*struc), &(*output));
	else
	{
		if (((*struc).dot == 1 && (*struc).pre != 0)
			&& ((size_t)(*struc).pre > ft_strlen((*output).string))
			&& ((size_t)(*struc).width > ft_strlen((*output).string)))
			output->sum_space = (*struc).width - ft_strlen((*output).string);
	}
}

void	type_s(t_print *struc, t_output *output)
{
	parser_s(&(*struc), &(*output));
	if ((*struc).minus == 0)
		ft_put_len(1, ' ', (*output).sum_space, &(*struc));
	if ((*struc).pre > 0)
		ft_printer_string((*output).string, (*struc).pre, &(*struc));
	else
	{
		if ((*struc).pre != 0)
			ft_putstr_sc_fd((*output).string, 1, &(*struc));
		else
		{
			if ((*struc).dot == 0)
				ft_putstr_sc_fd((*output).string, 1, &(*struc));
		}
	}
	if ((*struc).minus == 1)
		ft_put_len(1, ' ', (*output).sum_space, &(*struc));
}
