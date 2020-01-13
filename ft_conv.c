#include "ft_printf.h"

void	ft_conv(t_flags *prt, size_t *count_char, va_list args)
{
    //write(1, "W", 1);
	prt->conv == 1 ? ft_putnbrdi(va_arg(args, int), count_char) : 0;
    prt->conv == 2 ? ft_putnbrdi(va_arg(args, int), count_char) : 0;
    prt->conv == 3 ? ft_putnbru(va_arg(args, unsigned long int), count_char) : 0;
    prt->conv == 4 ? ft_putnbr_hexa(va_arg(args, unsigned long int), count_char) : 0;
    prt->conv == 5 ? ft_putnbr_hexa_maj(va_arg(args, unsigned long int), count_char) : 0;
	prt->conv == 6 ? ft_adres(va_arg(args, unsigned long int), count_char) : 0;
    prt->conv == 7 ? ft_putstr_c(va_arg(args, char*), count_char) : 0;
    prt->conv == 8 ? ft_putchar_c(va_arg(args, int), count_char) : 0;
}
