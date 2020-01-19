#include "ft_printf.h"

void	ft_flag_z(t_flags *prt, size_t *count_char, va_list args)
{
	(prt->conv == 1 || prt->conv == 2) ? ft_di_left(prt, '0', args, count_char) : 0;
	prt->conv == 3 ? ft_u_left(prt, '0', args, count_char) : 0;
	prt->conv == 4 ? ft_x_left(prt, '0', args, count_char) : 0;
	prt->conv == 5 ? ft_maj_x_left(prt, '0', args, count_char) : 0;
	prt->conv == 9 ? ft_percent_left(prt, '0', count_char) : 0;
}
