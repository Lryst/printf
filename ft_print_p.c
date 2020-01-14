#include "ft_printf.h"

void    ft_adres(unsigned long int nb, size_t *count_char)
{
    ft_putstr_c("0x", count_char);
    ft_putnbr_hexa(nb, count_char);
}

void    ft_p_right(t_flags *prt, va_list args, size_t *count_char)
{
    int tmp;
    int c;
    int n;

    n = 0;
    tmp = *count_char;
    ft_adres(va_arg(args, unsigned long int), count_char);
    c = *count_char - tmp;
    while (n + c < (prt->nbr_f))
    {
        ft_putchar_c(' ', count_char);
        n++;
    }
}

void    ft_p_left(t_flags *prt, char q, va_list args, size_t *count_char)
{
    int n;

    n = 0;
    while (n + 14 < (prt->nbr_f))
    {
        ft_putchar_c(q , count_char);
        n++;
    }
    ft_adres(va_arg(args, unsigned long int), count_char);
}