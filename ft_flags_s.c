#include "ft_printf.h"

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

void    ft_s_right_space(int nbr, va_list args, int *count_char)
{
    ft_putstr_c(va_arg(args, char*), count_char);
    if (*count_char < nbr)
        *count_char = nbr;
}

void    ft_s_left_zero(int nbr, va_list args, int *count_char)
{
    int u;
    char *s;
    int c;

    u = 0;
    s = va_arg(args, char*);
    c = ft_strlen(s);
    if (c > nbr)
    {
        while (u < nbr)
        {
            ft_putchar_c(s[u], count_char);
            u++;
        }
    }
    else if (c < nbr)
    ft_putstr_c(s, count_char);
}