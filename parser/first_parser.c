#	include "../ft_printf.h"

int	search_type(int c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
		|| c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

int	pars_flags(const char *format, int str, t_print *struc)
{
	if (format[str] == '-')
	{
		while (format[str] == '-' || format[str] == '0')
			str++;
		struc->minus = 1;
	}
	else if (format[str] == '0' && (*struc).minus == 0)
	{
		while (format[str] == '0')
			str++;
		struc->zero = 1;
		if (format[str] == '-')
		{
			while (format[str] == '-' || format[str] == '0')
				str++;
			struc->minus = 1;
			struc->zero = 0;
		}
	}
	return (str);
}

int	pars_width(const char *format, int str, t_print *struc)
{
	int	wid;

	wid = 0;
	if ((format[str] >= '0' && format[str] <= '9'))
	{
		while (format[str] >= '0' && format[str] <= '9')
		{	
			wid = (wid * 10) + format[str] - '0';
			str++;
		}
		struc->width = wid;
	}
	else if (format[str] == '*')
	{
		struc->w_star = 1;
		str++;
	}
	return (str);
}

int	pars_precision(const char *format, int str, t_print *struc)
{
	int	pr;

	pr = 0;
	if ((format[str] >='0' && format[str] <= '9'))
	{
		while (format[str] >= '0' && format[str] <= '9')
		{
			pr = (pr * 10) + format[str] - '0';
			str++;
		}
		struc->pre = pr;
	}
	else if (format[str] == '*')
	{
		struc->p_star = 1;
		str++;
	}
	return (str);
}

int	first_parser(const char *format, int str, t_print *struc)
{
	str++;
	struct_init(&(*struc));
	if (format[str] == '-' || format[str] == '0')
		str = pars_flags(format, str, &(*struc));
	if ((format[str] >= '0' && format[str] <= '9') || format[str] == '*')
		str = pars_width(format, str, &(*struc));
	if (format[str] == '.')
	{
		struc->dot = 1;
		str = pars_precision(format, ++str, &(*struc));
	}
	if (search_type(format[str]))
		type_selection(format[str], &(*struc));
	return (str);
}
