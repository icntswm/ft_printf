#	include "ft_printf.h"

void	struct_init(t_print *struc)
{
	struc->minus = 0;
	struc->zero = 0;
	struc->width = 0;
	struc->w_star = 0;
	struc->pre = 0;
	struc->p_star = 0;
	struc->dot = 0;
	struc->len_str = 0;
	struc->check_malloc = 0;
}

void	len_init(t_lenstr *lenstr, t_print *struc)
{
	lenstr->save_len_str = 0;
	lenstr->save_zmwp = 0;
	lenstr->save_n = 0;
	struct_init(&(*struc));
}

int	ft_printf(const char *format, ...)
{
	int			len_zmwp;
	int			n;
	t_print		struc;
	t_lenstr	lenstr;

	len_zmwp = 0;
	len_init(&lenstr, &struc);
	va_start(struc.ap, format);
	while (format[len_zmwp])
	{	
		if (format[len_zmwp] == '%')
		{
			lenstr.save_zmwp = len_zmwp;
			n = 0;
			n = first_parser(format, len_zmwp, &struc) - lenstr.save_zmwp;
			lenstr.save_n += n + 1;
			len_zmwp = lenstr.save_zmwp + n;
			lenstr.save_len_str += struc.len_str;
		}
		else
			write(1, &format[len_zmwp], 1);
		len_zmwp++;
	}
	va_end(struc.ap);
	return (lenstr.save_len_str + len_zmwp - lenstr.save_n);
}
