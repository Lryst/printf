#include "ft_printf.h"

void	ft_precision(t_flags *prt, int *count_char, va_list args)
{
	(prt->conv == 1 || prt->conv == 2) ? ft_di_left_p(prt, '0',args, count_char) : 0;
	prt->conv == 3 ? ft_u_left_p(prt, '0',args, count_char) : 0;
	prt->conv == 4 ? ft_x_left_p(prt, '0',args, count_char) : 0;
	prt->conv == 5 ? ft_maj_x_left_p(prt, '0',args, count_char) : 0;
	prt->conv == 7 ? ft_s_left_zero_p(prt, args, count_char) : 0;
}
