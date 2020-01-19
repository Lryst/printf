#include "ft_printf.h"

void	ft_flags_m(t_flags *prt, size_t *count_char, va_list args)
{
	(prt->conv == 1 || prt->conv == 2) ? ft_di_right(prt, args, count_char) : 0;
	prt->conv == 3 ? ft_u_right(prt, args, count_char) : 0;
	prt->conv == 4 ? ft_x_right(prt, args, count_char) : 0;
	prt->conv == 5 ? ft_maj_x_right(prt, args, count_char) : 0;
	prt->conv == 6 ? ft_p_right(prt, args, count_char) : 0;
	prt->conv == 7 ? ft_s_right(prt, args, count_char) : 0;
    prt->conv == 8 ? ft_c_right(prt, args, count_char) : 0;
	prt->conv == 9 ? ft_percent_right(prt, count_char) : 0;
}
