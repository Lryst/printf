#include "ft_printf.h"

void    ft_adres(unsigned long int nb, int *count_char)
{
    ft_putstr_c("0x", count_char);
    ft_putnbr_hexa(nb, count_char);
}

void	ft_putnbr_hexa(unsigned long int n, int *count_char)
{
	if (n > 15)
	{
		ft_putnbr_hexa((n / 16), count_char);
		ft_putnbr_hexa((n % 16), count_char);
	}
	else if (n < 10)
		ft_putchar_c(n + '0', count_char);
	else
		ft_putchar_c(n - 10 + 'a', count_char);
}

void    ft_putnbrdi(int n, int *count_char)
{
    if (n == -2147483648)
    {
        write(1, "-2147483648", 11);
        *count_char = *count_char + 11;
    }
    else
    {
        if (n < 0)
        {
            count_char = count_char + 1;;
            ft_putchar_c('-', count_char);
            n = n * -1;
        }
        if (n > 9)
        {
            ft_putnbrdi(n / 10, count_char);
            ft_putnbrdi(n % 10, count_char);
        }
        else
            ft_putchar_c(n + 48, count_char);
    }
}

void    ft_putnbru(unsigned long int n, int *count_char)
{
    if (n > 9)
    {
        ft_putnbru(n / 10, count_char);
        ft_putnbru(n % 10, count_char);
    }
    else
        ft_putchar_c(n + 48, count_char);    
}


void	ft_putnbr_hexa_maj(unsigned long int n, int *count_char)
{
	if (n > 15)
	{
		ft_putnbr_hexa_maj((n / 16), count_char);
		ft_putnbr_hexa_maj((n % 16), count_char);
	}
	else if (n < 10)
		ft_putchar_c(n + '0', count_char);
	else
		ft_putchar_c(n - 10 + 'A', count_char);
}