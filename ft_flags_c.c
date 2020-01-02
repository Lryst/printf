#include "ft_printf.h"

void    ft_c_left_space(int nbr, va_list args, int *count_char)
{
    int n;

    n = 0;
    while (n < (nbr - 1))
    {
        ft_putchar_c(' ', count_char);
        n++;
    }
    ft_putchar_c(va_arg(args, int), count_char);
}

void    ft_c_right_space(int nbr, va_list args, int *count_char)
{
    int n;

    n = 0;
    ft_putchar_c(va_arg(args, int), count_char);
    while (n < (nbr - 1))
    {
        ft_putchar_c(' ', count_char);
        n++;
    }
}