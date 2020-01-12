#include "ft_printf.h"

void    ft_putnbrdi(int n, int *count_char)
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

void    ft_di_left(t_flags *prt, char q, va_list args, int *count_char)
{
    int u;
    int c;
    int n;

    n = 0;
    u = va_arg(args, int);
    c = ft_intlen(u);
    if (u < 0)
    {
        ft_putchar_c('-', count_char);
        u = u * (-1);
    }
    while (n < ((prt->nbr_f) - c))
    {
        ft_putchar_c(q , count_char);
        n++;
    }
    ft_putnbrdi(u, count_char);
}

void    ft_di_right(t_flags *prt, va_list args, int *count_char)
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

void    ft_di_left_p(t_flags *prt, char q, va_list args, int *count_char)
{
    int u;
    int c;
    int n;

    n = 0;
    u = va_arg(args, int);
    c = ft_intlen(u);
    if (u < 0)
    {
        ft_putchar_c('-', count_char);
        u = u * (-1);
    }
    while (n < ((prt->nbr_p) - c))
    {
        ft_putchar_c(q , count_char);
        n++;
    }
    ft_putnbrdi(u, count_char);
}