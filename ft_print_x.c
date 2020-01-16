#include "ft_printf.h"

void	ft_putnbr_hexa(unsigned long int n, size_t *count_char)
{
	if (n > 15)
	{
		ft_putnbr_hexa((n / 16), count_char);
		ft_putnbr_hexa((n % 16), count_char);
	}
	else if (n < 10)
		ft_putchar_c(n + '0', count_char);
	else
		ft_putchar_c(n - 10 + 'a', count_char);
}

void    ft_x_left(t_flags *prt, char q, va_list args, size_t *count_char)
{
    int n;
    int c;
    unsigned long int u;

    n = 0;
    u = va_arg(args, unsigned int);
    c = ft_hexa_len(u);
    if (u == 0 && prt->nbr_p == 0)
    {
        return;
    }
    if (c < prt->nbr_f)
    {
        while (n + c < (prt->nbr_f))
        {
            ft_putchar_c(q, count_char);
            n++;
        }
    }
    ft_putnbr_hexa(u, count_char);
}

void    ft_x_right(t_flags *prt, va_list args, size_t *count_char)
{
    int tmp;
    int c;
    unsigned long int n;

    n = 0;
    tmp = *count_char;
    ft_putnbr_hexa(va_arg(args, unsigned int), count_char);
    c = *count_char - tmp;
    while (n + c < ((unsigned int)prt->nbr_f))
    {
        ft_putchar_c(' ', count_char);
        n++;
    }
}

void    ft_x_left_p(t_flags *prt, char q, va_list args, size_t *count_char)
{
    unsigned long int u;
    int c;
    unsigned long int n;

    n = 0;
    u = va_arg(args, unsigned int);
    c = ft_hexa_len(u);
    if (u == 0 && prt->nbr_p == 0)
    {
        return;
    }
    if (c < prt->nbr_p)
    {
        while (n + c < ((unsigned int)prt->nbr_p))
        {
            ft_putchar_c(q, count_char);
            n++;
        }
    }
    ft_putnbr_hexa(u, count_char);
}

void	ft_x_width_p(t_flags *prt, va_list args, size_t *count_char)
{
	int i;
    int len;
    unsigned long int nbr;

    i = 0;
    nbr = va_arg(args, unsigned int);
    len = ft_hexa_len(nbr);
    if (nbr == 0 && prt->nbr_p == 0)
    {
        i = 0;
        while(i++ < prt->nbr_f)
            ft_putchar_c(' ', count_char);
        return;
    }
    if (prt->nbr_f > 0)
	{
		if (prt->nbr_p < len)
		{
			while (i++ < ((prt->nbr_f) - len))
            {
				ft_putchar_c(' ', count_char);
            }

		}
		else if (prt->nbr_p >= len)
		{
			i = 0;
			while (i++ < ((prt->nbr_f - prt->nbr_p)))
            {
					ft_putchar_c(' ', count_char);
            }
			i = 0;
			while (i++ < ((prt->nbr_p) - len))
				ft_putchar_c('0' , count_char);
		}
	}
	ft_putnbr_hexa(nbr, count_char);
}