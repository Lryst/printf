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
            count_char = count_char + 1;;
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
    while (n < ((prt->nbr_f) - c))
    {
        ft_putchar_c(q , count_char);
        n++;
    }
	if (u < 0)
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
    while (n < ((prt->nbr_f) - c))
    {
        ft_putchar_c(' ' , count_char);
        n++;
    }
}

void    ft_di_left_p(t_flags *prt, char q, va_list args, size_t *count_char)
{
    int u;
    int c;
    int n;

    n = 0;
    u = va_arg(args, int);
    c = ft_intlen(u);
    while (n < ((prt->nbr_p) - c))
    {
		if (u < 0)
		{
			ft_putchar_c('-', count_char);
			u = u * (-1);
		}
        ft_putchar_c(q , count_char);
        n++;
    }
    ft_putnbrdi(u, count_char);
}

void	ft_di_width_p(t_flags *prt, va_list args, int *count_char)
{
	int len;
    int nbr;
    int i;

    i = 0;
    nbr = va_arg(args, int);
    len = intlen(nbr);
    if (prt->nbr_p < len)
    {
        while (i++ < ((prt->nbr_f) - len))
            ft_putchar_c(' ', count_char);
        ft_putnbrdi(nbr, count_char);
    }
    else if (prt->nbr_p > len)
    {
        while(i < )
        {
            if (nbr < 0)
            {
                nbr = nbr * (-1);
            }
        }
        while (i < ((prt->nbr_p) - len))
        {
            if (nbr < 0)
            {
                ft_putchar_c('-', count_char);
                nbr = nbr * (-1);
            }
            ft_putchar_c('0' , count_char);
            i++;
        }
        ft_putnbrdi(nbr, count_char);
    }
}
