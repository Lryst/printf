#include "ft_printf.h"

void    ft_s_left_space(t_flags *prt, char q, va_list args, size_t *count_char)
{
    int n;
    int c;
    char *s;

    n = 0;
    s = va_arg(args, char*);
    c = ft_strlen(s);
    while (n < ((prt->nbr_f) - c))
    {
        ft_putchar_c(q , count_char);
        n++;
    }
    ft_putstr_c(s, count_char);
}

void    ft_s_right(t_flags *prt, va_list args, size_t *count_char)
{
    ft_putstr_c(va_arg(args, char*), count_char);
    if (*count_char < (prt->nbr_f))
        *count_char = (prt->nbr_f);
}

void    ft_s_left_zero(t_flags *prt, va_list args, size_t *count_char)
{
    int u;
    char *s;
    int c;

    u = 0;
    s = va_arg(args, char*);
    c = ft_strlen(s);
    if (c > (prt->nbr_f))
    {
        while (u < (prt->nbr_f))
        {
            ft_putchar_c(s[u], count_char);
            u++;
        }
    }
    else if (c < (prt->nbr_f))
        ft_putstr_c(s, count_char);
}

void    ft_s_left_zero_p(t_flags *prt, va_list args, size_t *count_char)
{
    int u;
    char *s;
    int c;

    u = 0;
    s = va_arg(args, char*);
    c = ft_strlen(s);
    if (c > (prt->nbr_p))
    {
        while (u < (prt->nbr_p))
        {
            ft_putchar_c(s[u], count_char);
            u++;
        }
    }
    else if (c < (prt->nbr_p))
        ft_putstr_c(s, count_char);
}