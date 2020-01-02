#include "ft_printf.h"

void    ft_flags_left_space(const char *str, int *i, va_list args, int *count_char)
{
    int nbr;
	int u;
	int c;
	int n;
	char *s;

	n = 0;
	nbr = 0;
	while (str[*i] >= '0' && str[*i] <= '9')
    {
        nbr = nbr * 10 + (str[*i] - 48);
        *i = *i + 1;
    }
	(str[*i] == 'd' || str[*i] == 'i') ? ft_di_left_space(nbr, args, count_char) : 0;
    str[*i] == 's' ? ft_s_left_space(nbr, args, count_char) : 0;
	{
		u = 0;
		s = va_arg(args, char*);
		c = ft_strlen(s);
		while (n < (nbr - c))
		{
			ft_putchar_c(' ', count_char);
			n++;
		}
		ft_putstr_c(s, count_char);
	}
    if (str[*i] == 'c')
	{
		while (n < (nbr - 1))
		{
			ft_putchar_c(' ', count_char);
			n++;
		}
		ft_putchar_c(va_arg(args, int), count_char);
	}
	if (str[*i] == 'u')
	{
		u = va_arg(args, unsigned int);
		c = ft_unsigned_len(u);
		while (n < (nbr - c))
		{
			ft_putchar_c(' ', count_char);
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
			ft_putchar_c(' ', count_char);
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
			ft_putchar_c(' ', count_char);
			n++;
		}
        ft_putnbr_hexa_maj(u, count_char);
	}

	if (str[*i] == 'p')
	{
		while (n + 14 < nbr)
		{
			ft_putchar_c(' ', count_char);
			n++;
		}
		ft_adres(va_arg(args, unsigned long int), count_char);
	}
}
