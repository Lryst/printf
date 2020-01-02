#include "ft_printf.h"

void    ft_x_flags_space(int nbr, va_list args, int *count_char)
{
    int u;
    int c;
    int n;

    n = 0;
    u = va_arg(args, unsigned int);
    c = ft_hexa_len(u);
    while (n + c < nbr)
    {
        ft_putchar_c(' ', count_char);
        n++;
    }
    ft_putnbr_hexa(u, count_char);
}

void    ft_x_right_space(int nbr, va_list args, int *count_char)
{
    int tmp;
    int c;
    int n;

    n = 0;
    tmp = *count_char;
    ft_putnbr_hexa(va_arg(args, unsigned int), count_char);
    c = *count_char - tmp;
    while (n + c < nbr)
    {
        ft_putchar_c(' ', count_char);
        n++;
    }
}

void    ft_x_left_zero(int nbr, va_list args, int *count_char)
{
    int u;
    int c;
    int n;

    n = 0;
    u = va_arg(args, unsigned int);
    c = ft_hexa_len(u);
    while (n + c < nbr)
    {
        ft_putchar_c('0', count_char);
        n++;
    }
    ft_putnbr_hexa(u, count_char);
}
