#include "ft_printf.h"

void	ft_width(t_flags *prt, size_t *count_char, va_list args)
{
	(prt->conv == 1 || prt->conv == 2) ? ft_di_left(prt, ' ', args, count_char) : 0;
	prt->conv == 3 ? ft_u_left(prt, ' ', args, count_char) : 0;
	prt->conv == 4 ? ft_x_left(prt, ' ', args, count_char) : 0;
	prt->conv == 5 ? ft_maj_x_left(prt, ' ', args, count_char) : 0;
	prt->conv == 6 ? ft_p_left(prt, ' ', args, count_char) : 0;
	prt->conv == 7 ? ft_s_left_space(prt, ' ', args, count_char) : 0;
	prt->conv == 8 ? ft_c_left(prt, ' ', args, count_char) : 0;
}

void	ft_width_p(t_flags *prt, size_t *count_char, va_list args)
{
	if (prt->nbr_f > prt->nbr_p)
	{
		(prt->conv == 1 || prt->conv == 2) ? ft_di_width_p(prt, args, count_char) : 0;
		prt->conv == 3 ? ft_u_width_p(prt, args, count_char) : 0;
		prt->conv == 4 ? ft_x_width_p(prt, args, count_char) : 0;
		prt->conv == 5 ? ft_maj_x_width_p(prt, args, count_char) : 0;
		prt->conv == 7 ? ft_s_width_p(prt, args, count_char) : 0;
	}
	else if (prt->nbr_f <= prt->nbr_p)
		ft_precision(prt, count_char, args);
}
