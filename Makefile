
.PHONY: all clean fclean re

SRCS	=	ft_printf.c							\
            parser/first_parser.c				\
			parser/second_parser.c				\
            sources/type_selection.c			\
			sources/type_s.c					\
			sources/type_c.c					\
			sources/type_d_i.c					\
			sources/type_u.c					\
			sources/type_pointer.c				\
			sources/type_x_X.c					\
			sources/type_percent.c				\
			printing/ft_putstr_sc_fd.c			\
			printing/ft_printer_string.c		\
			printing/ft_put_len.c				\
			printing/ft_putchar_sc_fd.c			\
			printing/ft_hexsys.c				\
			printing/ft_hexcounter.c			\
			itoa_conv/ft_itoa_conv.c			\
			itoa_conv/ft_itoa_conv_unsigned.c

LIBFT	=	libft

OBJS	=	${SRCS:.c=.o}

NAME	=	libftprintf.a
PR_HEAD	=	ft_printf.h
LB_HEAD	=	libft/libft.h	
RM		=	rm -f
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror

.c.o:		${PR_HEAD}
			${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
			make -C ${LIBFT}
			cp libft/libft.a ${NAME}
			ar rc ${NAME} ${OBJS}
			ranlib ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}
			make clean -C ${LIBFT}

fclean:		clean
			${RM} ${NAME}
			make fclean -C ${LIBFT}

re:			fclean all
