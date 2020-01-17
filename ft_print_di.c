#include "ft_printf.h"

void    ft_putnbrdi(int n, size_t *count_char)
{
    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        *count_char = *count_char + 11;
    }
    else
    {
        if (n < 0)
        {
            ft_putchar_c('-', count_char);
            n = n * -1;
        }
        if (n > 9)
        {
            ft_putnbrdi(n / 10, count_char);
            ft_putnbrdi(n % 10, count_char);
        }
        else
            ft_putchar_c(n + 48, count_char);
    }
}

void    ft_di_left(t_flags *prt, char q, va_list args, size_t *count_char)
{
    int u;
    int c;
    int n;

    n = 0;
    u = va_arg(args, int);
    c = ft_intlen(u);
    if (u == 0 && prt->nbr_f == 0 && prt->p != 0 && prt->nbr_p == 0)
    {
        n = 0;
        while(n++ < prt->nbr_f)
            ft_putchar_c(' ', count_char);
        return;
    }
        if (u < 0 && prt->flags == 1)
    {
        ft_putchar_c('-', count_char);
        u = u * (-1);
    }
    while (n < ((prt->nbr_f) - c))
    {
        ft_putchar_c(q , count_char);
        n++;
    }
	if (u < 0 && prt->flags == 0)
    {
        ft_putchar_c('-', count_char);
        u = u * (-1);
    }
    ft_putnbrdi(u, count_char);
}

void    ft_di_right(t_flags *prt, va_list args, size_t *count_char)
{
    int u;
    int n;
    int c;

    n = 0;
    u = va_arg(args, int);
    c = ft_intlen(u);
    ft_putnbrdi(u, count_char);
    while (n++ < ((prt->nbr_f) - c))
    {
        ft_putchar_c(' ' , count_char);
    }
}

void    ft_di_left_p(t_flags *prt, char q, va_list args, size_t *count_char)
{
    int nbr;
    int len;
    int i;

    i = 0;
    nbr = va_arg(args, int);
    len = ft_intlen(nbr);
    if (nbr == 0 && prt->nbr_p == 0)
    {
        return;
    }
    if (nbr >= 0)
    {
        while (i < ((prt->nbr_p) - len))
        {
            ft_putchar_c(q , count_char);
            i++;
        }
    }
    if (nbr < 0)
    {
        ft_putchar_c('-', count_char);
        nbr = nbr * (-1);
        while (i < ((prt->nbr_p) - (len - 1)))
        {
            ft_putchar_c(q , count_char);
            i++;
        }
    }
    ft_putnbrdi(nbr, count_char);
}

void	ft_di_width_p(t_flags *prt, va_list args, size_t *count_char)
{
	int len;
    int nbr;
    int i;

    i = 0;
    nbr = va_arg(args, int);
    len = ft_intlen(nbr);
    if (nbr == 0 && prt->nbr_p == 0)
    {
        i = 0;
        while(i++ < prt->nbr_f)
            ft_putchar_c(' ', count_char);
        return;
    }
    if (prt->nbr_p < len)
    {
        while (i++ < ((prt->nbr_f) - len))
            ft_putchar_c(' ', count_char);
    }
    else if (prt->nbr_p >= len)
    {
			if (nbr >= 0)
			{
				i = 0;
				while (i++ < ((prt->nbr_f - prt->nbr_p)))
						ft_putchar_c(' ', count_char);
				i = 0;
				while (i < ((prt->nbr_p) - len))
				{
					ft_putchar_c('0' , count_char);
					i++;
				}
			}
			if (nbr < 0)
			{
				while (i++ < ((prt->nbr_f - prt->nbr_p) - 1))
					ft_putchar_c(' ', count_char);
				ft_putchar_c('-', count_char);
				nbr = -nbr;
				i = 0;
				while (i < ((prt->nbr_p) - len + 1))
				{
					ft_putchar_c('0' , count_char);
					i++;
				}
			}
			
	
    }
	ft_putnbrdi(nbr, count_char);
}
