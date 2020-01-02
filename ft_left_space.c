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

void    ft_s_left_space(int nbr, va_list args, int *count_char)
{
    int n;
    int c;
    char *s;

    n = 0;
    s = va_arg(args, char*);
    c = ft_strlen(s);
    while (n < (nbr - c))
    {
        ft_putchar_c(' ', count_char);
        n++;
    }
    ft_putstr_c(s, count_char);
}