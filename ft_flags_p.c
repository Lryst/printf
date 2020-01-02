#include "ft_printf.h"

void    ft_p_left_space(int nbr, va_list args, int *count_char)
{
    int n;

    n = 0;
    while (n + 14 < nbr)
    {
        ft_putchar_c(' ', count_char);
        n++;
    }
    ft_adres(va_arg(args, unsigned long int), count_char);
}

void    ft_p_right_space(int nbr, va_list args, int *count_char)
{
    int tmp;
    int c;
    int n;

    n = 0;
    tmp = *count_char;
    ft_adres(va_arg(args, unsigned long int), count_char);
    c = *count_char - tmp;
    while (n + c < nbr)
    {
        ft_putchar_c(' ', count_char);
        n++;
    }
}