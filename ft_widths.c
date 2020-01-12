#include "ft_printf.h"

void	ft_width(t_flags *prt, int *count_char, va_list args)
{
	(prt->conv == 1 || prt->conv == 2) ? ft_di_left(prt, '0', args, count_char) : 0;
	prt->conv == 3 ? ft_u_left(prt, ' ', args, count_char) : 0;
	prt->conv == 4 ? ft_x_left(prt, ' ', args, count_char) : 0;
	prt->conv == 5 ? ft_maj_x_left(prt, ' ', args, count_char) : 0;
	prt->conv == 6 ? ft_c_left(prt, ' ', args, count_char) : 0;
	prt->conv == 7 ? ft_s_left_space(prt, ' ', args, count_char) : 0;
}

void	ft_width_p(t_flags *prt, int *count_char, va_list args)
{
	int n;

	n = 0;
	if ((prt->nbr_f) > prt->nbr_p)
	{
		n = (prt->nbr_f) - (prt->nbr_p);
		write(1, " ", n);
		*count_char = *count_char + n;
	}
	ft_precision(prt, count_char, args);
}