#	include "../ft_printf.h"

static char	*ft_itoa_swap(char *s)
{
	int		i;
	int		j;
	char	a;

	i = 0;
	j = ft_strlen(s) - 1;
	while (i < j)
	{
		a = s[i];
		s[i] = s[j];
		s[j] = a;
		i++;
		j--;
	}
	return (s);
}

static int	ft_itoa_len(unsigned int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa_conv_unsigned(unsigned int n, t_print *struc)
{
	char	*str;
	int		i;

	if (n == 0)
	{
		struc->check_malloc = 1;
		return (ft_strdup("0"));
	}
	str = malloc(sizeof(char) * (ft_itoa_len(n) + 1));
	if (str != NULL)
		struc->check_malloc = 1;
	else
		return (NULL);
	i = 0;
	while (n != 0)
	{
		str[i++] = n % 10 + '0';
		n /= 10;
	}
	str[i] = '\0';
	return (ft_itoa_swap(str));
}
