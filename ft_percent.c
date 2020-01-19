#include "ft_printf.h"

void    ft_percent_right(t_flags *prt, size_t *count_char)
{
    int n;

    n = 0;
    ft_putchar_c('%', count_char);
    while (n < ((prt->nbr_f) - 1))
    {
        ft_putchar_c(' ', count_char);
        n++;
    }
}

void    ft_percent_left(t_flags *prt, char q, size_t *count_char)
{
    int n;

    n = 0;
    while (n < ((prt->nbr_f) - 1))
    {
        ft_putchar_c(q , count_char);
        n++;
    }
    ft_putchar_c('%', count_char);
}
