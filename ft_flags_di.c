#include "ft_printf.h"

void    ft_di_left_space(int nbr, va_list args, int *count_char)
{
    int u;
    int c;
    int n;

    n = 0;
    u = va_arg(args, int);
    c = ft_intlen(u);
    while (n < (nbr - c))
    {
        ft_putchar_c(' ', count_char);
        n++;
    }
    ft_putnbrdi(u, count_char);
}

void    ft_di_right_space(int nbr, va_list args, int *count_char)
{
    int u;
    int n;
    int c;

    n = 0;
    u = va_arg(args, int);
    c = ft_intlen(u);
    ft_putnbrdi(u, count_char);
    while (n < (nbr - c))
    {
        ft_putchar_c(' ', count_char);
        n++;
    }
}

void    ft_di_left_zero(int nbr, va_list args, int *count_char)
{
    int u;
    int c;
    int n;

    n = 0;
    u = va_arg(args, int);
    c = ft_intlen(u);
    while (n < (nbr - c))
    {
        ft_putchar_c('0', count_char);
        n++;
    }
    ft_putnbrdi(u, count_char);
}