#include "ft_printf.h"

void	ft_flag_right_space(const char *str, int *i, va_list args, int *count_char)
{
    int nbr;
	int c;
	int n;
	int u;
	int tmp;

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
		ft_putnbrdi(u, count_char);
		while (n < (nbr - c))
		{
			ft_putchar_c(' ', count_char);
			n++;
		}
	}
    if (str[*i] == 's')
	{
		ft_putstr_c(va_arg(args, char*), count_char);
		if (*count_char < nbr)
    		*count_char = nbr;
	}
    if (str[*i] == 'c')
	{
		ft_putchar_c(va_arg(args, int), count_char);
		while (n < (nbr - 1))
		{
			ft_putchar_c(' ', count_char);
			n++;
		}
	}
	if (str[*i] == 'u')
	{
		u = va_arg(args, unsigned int);
		c = ft_unsigned_len(u);
		ft_putnbru(u, count_char);
		while (n < (nbr - c))
		{
			ft_putchar_c(' ', count_char);
			n++;
		}
	}
	if (str[*i] == 'x')
	{
		tmp = *count_char;
		ft_putnbr_hexa(va_arg(args, unsigned int), count_char);
		c = *count_char - tmp;
		while (n + c < nbr)
		{
			ft_putchar_c(' ', count_char);
			n++;
		}
	}

	if (str[*i] == 'X')
	{
		tmp = *count_char;
		ft_putnbr_hexa_maj(va_arg(args, unsigned int), count_char);
		c = *count_char - tmp;
		while (n + c < nbr)
		{
			ft_putchar_c(' ', count_char);
			n++;
		}
	}

	if (str[*i] == 'p')
	{
		tmp = *count_char;
		ft_adres(va_arg(args, unsigned long int), count_char);
		c = *count_char - tmp;
		while (n + c < nbr)
		{
			ft_putchar_c(' ', count_char);
			n++;
		}
	}
}