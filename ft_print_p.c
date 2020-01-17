#include "ft_printf.h"

void    ft_adres(unsigned long int nb, size_t *count_char)
{
    ft_putstr_c("0x", count_char);
    ft_putnbr_hexa(nb, count_char);
}

void    ft_p_right(t_flags *prt, va_list args, size_t *count_char)
{
    unsigned long int adress;
    int len;
    int n;

    n = 0;
    adress = va_arg(args, unsigned long int);
    len = ft_hexa_len(adress) + 2;
    ft_adres(adress, count_char);
    if (len < prt->nbr_f)
    {
        while (n + len < (prt->nbr_f))
        {
            ft_putchar_c(' ', count_char);
            n++;
        }
    }
    
}

void    ft_p_left(t_flags *prt, char q, va_list args, size_t *count_char)
{
    int n;
    unsigned long int adress;
    int len;

    n = 0;
    adress = va_arg(args, unsigned long int);
    len = ft_hexa_len(adress) + 2;
    while (n++ < (prt->nbr_f) - len)
    {
        ft_putchar_c(q , count_char);

    }
    ft_adres(adress, count_char);
}

