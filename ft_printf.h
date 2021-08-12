#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

//the structure in which the data is stored after parsing
typedef struct s_print
{
	va_list	ap;
	int		minus;
	int		zero;
	int		width;
	int		w_star;
	int		pre;
	int		p_star;
	int		dot;
	int		len_str;
	int		check_malloc;
}				t_print;
//structure used to display the result on the screen
typedef struct s_output
{
	unsigned char		symbol;
	char				*string;
	int					sum_space;
	int					sum_zero;
	int					num_f_di;
	unsigned int		num_f_u;
	unsigned long long	num_f_p;
	unsigned int		num_f_x;
}				t_output;
//structure to store the length of strings for later output
typedef struct s_lenstr
{
	int		save_len_str;
	int		save_zmwp;
	int		save_n;
}				t_lenstr;

int		ft_printf(const char *format, ...);
//parser
int		first_parser(const char *format, int str, t_print *struc);
void	second_parser(t_print *struc);
//type
void	type_selection(int type, t_print *struc);
void	type_c(t_print *struc, t_output *output);
void	type_s(t_print *struc, t_output *output);
void	type_percent(t_print *struc, t_output *output);
void	type_d_i(t_print *struc, t_output *output);
void	type_u(t_print *struc, t_output *output);
void	type_x_X(int type, t_print *struc, t_output *output);
void	type_pointer(int type, t_print *struc, t_output *output);
//initialization
void	struct_init(t_print *struc);
//printing
void	ft_putchar_sc_fd(char c, int fd, t_print *struc);
void	ft_put_len(int fd, char c, int width, t_print *struc);
void	ft_putstr_sc_fd(char *s, int fd, t_print *struc);
void	ft_printer_string(char *s, int precision, t_print *struc);
void	ft_hexsys(int type, unsigned long long n, int fd, t_print *struc);
int		ft_hexcounter(unsigned long long n, int fd);
//converted from libft
char	*ft_itoa_conv(int n, t_print *struc);
char	*ft_itoa_conv_unsigned(unsigned int n, t_print *struc);

#endif