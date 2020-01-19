#include "ft_printf.h"

int		ft_p_len(unsigned long long nb)
{
	int len;

	len = 0;
	if (nb == 0)
		len = 1;
	while (nb > 0)
	{
		nb = nb / 16;
		len++;
	}
	return (len);
}
void	ft_putnbr_p(unsigned long long n, size_t *count_char)
{
	if (n > 15)
	{
		ft_putnbr_p((n / 16), count_char);
		ft_putnbr_p((n % 16), count_char);
	}
	else if (n < 10)
		ft_putchar_c(n + '0', count_char);
	else
		ft_putchar_c(n - 10 + 'a', count_char);
}

void    ft_adres(unsigned long long nb, size_t *count_char)
{
    ft_putstr_c("0x", count_char);
    ft_putnbr_p(nb, count_char);
}

void    ft_p_right(t_flags *prt, va_list args, size_t *count_char)
{
   unsigned long long adres;
    int len;
    int n;

    n = 0;
    adres = va_arg(args,unsigned long long);
    len = ft_p_len(adres) + 2;
    ft_adres(adres, count_char);
    while (n + len < (prt->nbr_f))
    {
        ft_putchar_c(' ', count_char);
        n++;
    }
}

void    ft_p_left(t_flags *prt, char q, va_list args, size_t *count_char)
{
    int n;
   unsigned long long adres;
    int len;

    n = 0;
	adres = va_arg(args,unsigned long long);
    len = ft_p_len(adres) + 2;
    while (n++ < (prt->nbr_f) - len)
    {
        ft_putchar_c(q , count_char);

    }
    ft_adres(adres, count_char);
}
