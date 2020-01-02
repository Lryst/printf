#include "ft_printf.h"

void	ft_u_left_space(int nbr, va_list args, int *count_char)
{
	int u;
	int c;
	int n;

	n = 0;
	u = va_arg(args, unsigned int);
	c = ft_unsigned_len(u);
	while (n < (nbr - c))
	{
		ft_putchar_c(' ', count_char);
		n++;
	}
	ft_putnbru(u, count_char);
}

void	ft_u_right_space(int nbr, va_list args, int *count_char)
{
	int u;
	int c;
	int n;

	n = 0;
	u = va_arg(args, unsigned int);
	c = ft_unsigned_len(u);
	ft_putnbru(u, count_char);
	while (n < (nbr - c))
	{
		ft_putchar_c(' ', count_char);
		n++;
	}
}

void	ft_u_left_zero(int nbr, va_list args, int *count_char)
{
	unsigned int u;
	unsigned int c;
	unsigned long int n;

	n = 0;
	u = va_arg(args, unsigned int);
	c = ft_unsigned_len(u);
	while (n < ((unsigned long int)nbr - c))
	{
		ft_putchar_c('0', count_char);
		n++;
	}
	ft_putnbru(u, count_char);
}
