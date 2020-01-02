#include "ft_printf.h"

void    ft_flag_stars(const char *str, int *i, va_list args, int *count_char)
{
    int nbr;

	nbr = va_arg(args, int);
    *i = *i + 1;
	(str[*i] == 'd' || str[*i] == 'i') ? ft_di_left_space(nbr, args, count_char) : 0;
    str[*i] == 's' ? ft_s_left_space(nbr, args, count_char) : 0;
    str[*i] == 'c' ? ft_c_left_space(nbr, args, count_char) : 0;
	str[*i] == 'u' ? ft_u_left_space(nbr, args, count_char) : 0;
	str[*i] == 'x' ? ft_x_flags_space(nbr, args, count_char) : 0;
	str[*i] == 'X' ? ft_maj_x_left_space(nbr, args, count_char) : 0;
	str[*i] == 'p' ? ft_p_left_space(nbr, args, count_char) : 0;
}