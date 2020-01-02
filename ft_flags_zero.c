#include "ft_printf.h"

void	ft_flag_zero(const char *str, int *i, va_list args, int *count_char)
{
    int nbr;
	int c;
	int n;
	int u;

	n = 0;
    nbr = 0;
    *i = *i + 1;
    while (str[*i] >= '0' && str[*i] <= '9')
    {
        nbr = nbr * 10 + (str[*i] - 48);
        *i = *i + 1;
    }
    if (str[*i] == 'd' || str[*i] == 'i')
	{
		u = va_arg(args, int);
		c = ft_intlen(u);
		while (n < (nbr - c))
		{
			ft_putchar_c('0', count_char);
			n++;
		}
        ft_putnbrdi(u, count_char);
	}
	if (str[*i] == 'u')
	{
		u = va_arg(args, unsigned int);
		c = ft_unsigned_len(u);
		while (n < (nbr - c))
		{
			ft_putchar_c('0', count_char);
			n++;
		}
        ft_putnbru(u, count_char);
	}
	if (str[*i] == 'x')
	{
		u = va_arg(args, unsigned int);
		c = ft_hexa_len(u);
		while (n + c < nbr)
		{
			ft_putchar_c('0', count_char);
			n++;
		}
        ft_putnbr_hexa(u, count_char);
	}

	if (str[*i] == 'X')
	{
		u = va_arg(args, unsigned int);
		c = ft_hexa_len(u);
		while (n + c < nbr)
		{
			ft_putchar_c('0', count_char);
			n++;
		}
		ft_putnbr_hexa_maj(u, count_char);
	}
}