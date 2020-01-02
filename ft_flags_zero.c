#include "ft_printf.h"

void	ft_flag_zero(const char *str, int *i, va_list args, int *count_char)
{
    int nbr;
	
    nbr = 0;
    *i = *i + 1;
    while (str[*i] >= '0' && str[*i] <= '9')
    {
        nbr = nbr * 10 + (str[*i] - 48);
        *i = *i + 1;
    }
    if (str[*i] == '*')
        nbr = va_arg(args, int);
    (str[*i] == 'd' || str[*i] == 'i') ? ft_di_left_zero(nbr, args, count_char) : 0;
	str[*i] == 'u' ? ft_u_left_zero(nbr, args, count_char) : 0;
	str[*i] == 'x' ? ft_x_left_zero(nbr, args, count_char) : 0;
	str[*i] == 'X' ? ft_maj_x_left_zero(nbr, args, count_char) : 0;
}