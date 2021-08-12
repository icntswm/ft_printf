#	include "../ft_printf.h"

void	output_init(t_output *output)
{
	output->symbol = 0;
	output->string = NULL;
	output->sum_space = 0;
	output->sum_zero = 0;
	output->num_f_di = 0;
	output->num_f_u = 0;
	output->num_f_p = 0;
	output->num_f_x = 0;
}

void	type_selection(int type, t_print *struc)
{
	t_output	output;

	second_parser(&(*struc));
	output_init(&output);
	if (type == 'c')
		type_c(&(*struc), &output);
	else if (type == 's')
		type_s(&(*struc), &output);
	else if (type == '%')
		type_percent(&(*struc), &output);
	else if (type == 'd' || type == 'i')
		type_d_i(&(*struc), &output);
	else if (type == 'u')
		type_u(&(*struc), &output);
	else if (type == 'x' || type == 'X')
		type_x_X(type, &(*struc), &output);
	else if (type == 'p')
		type_pointer(type, &(*struc), &output);
}
