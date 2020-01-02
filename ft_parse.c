#include "ft_printf.h"

void    ft_parse(const char *str, int *i, va_list args, int *count_char)
{
    *i = *i + 1;
    str[*i] == 'd' ? ft_putnbrdi(va_arg(args, int), count_char) : 0;
    str[*i] == 'i' ? ft_putnbrdi(va_arg(args, int), count_char) : 0;
    str[*i] == 'u' ? ft_putnbru(va_arg(args, unsigned long int), count_char) : 0;
    str[*i] == 'x' ? ft_putnbr_hexa(va_arg(args, unsigned long int), count_char) : 0;
    str[*i] == 'X' ? ft_putnbr_hexa_maj(va_arg(args, unsigned long int), count_char) : 0;
    str[*i] == 'p' ? ft_adres(va_arg(args, unsigned long int), count_char) : 0;
    str[*i] == 's' ? ft_putstr_c(va_arg(args, char*), count_char) : 0;
    str[*i] == 'c' ? ft_putchar_c(va_arg(args, int), count_char) : 0;
	str[*i] == '-' ? ft_flag_right_space(str, i, args, count_char) : 0;
	str[*i] == '*' ? ft_flag_stars(str, i, args, count_char) : 0;
	str[*i] == '.' ? ft_flag_left_zero(str, i, args, count_char) : 0;
	str[*i] == '0' ? ft_flag_zero(str, i, args, count_char) : 0;
    str[*i] > '0' && str[*i] <= '9' ? ft_flags_left_space(str, i, args, count_char) : 0;
    str[*i] == '%' ? ft_putchar_c('%', count_char) : 0;
}
