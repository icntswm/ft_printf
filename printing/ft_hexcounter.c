#	include "../ft_printf.h"

int	ft_hexcounter(unsigned long long n, int fd)
{
	static int	sum;

	sum = 0;
	if (n > 15)
		ft_hexcounter(n / 16, fd);
	if (n % 16 <= 9)
		sum++;
	if ((n % 16) == 10)
		sum++;
	if ((n % 16) == 11)
		sum++;
	if ((n % 16) == 12)
		sum++;
	if ((n % 16) == 13)
		sum++;
	if ((n % 16) == 14)
		sum++;
	if ((n % 16) == 15)
		sum++;
	return (sum);
}
