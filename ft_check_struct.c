#include "ft_printf.h"

void	ft_check_struct(t_flags *prt, size_t *count_char, va_list args)
{
	if (prt-> flags != 0 && prt->nbr_f >= 0 && prt-> p != 0 && prt->nbr_p < 0 && prt->conv != 0)
		ft_just_flag(prt, count_char, args);
	if (prt-> flags == 0 && prt->nbr_f == -1 && prt-> p != 0 && prt->nbr_p < 0 && prt->conv != 0)
		ft_conv(prt, count_char, args);
	if (prt-> flags == 0 && prt->nbr_f == -1 && prt-> p == 0 && prt->nbr_p < 0 && prt->conv != 0)
		ft_conv(prt, count_char, args);
	if (prt-> flags != 0 && prt->nbr_f >= 0 && prt-> p == 0 && prt->nbr_p < 0 && prt->conv != 0)
		ft_just_flag(prt, count_char, args);
	if (prt-> flags == 0 && prt->nbr_f == -1 && prt-> p != 0 && prt->nbr_p >= 0 && prt->conv != 0)
		ft_precision(prt, count_char, args);
	if (prt-> flags == 0 && prt->nbr_f >= 0 && prt-> p != 0 && prt->nbr_p < 0 && prt->conv != 0)
		ft_width(prt, count_char, args);
	if (prt-> flags == 0 && prt->nbr_f >= 0 && prt-> p == 0 && prt->nbr_p < 0 && prt->conv != 0)
		ft_width(prt, count_char, args);
	if (prt-> flags != 0 && prt->nbr_f >= 0 && prt-> p != 0 && prt->nbr_p >= 0 && prt->conv != 0)
		ft_full_flags(prt, count_char, args);
	if (prt-> flags == 0 && prt->nbr_f >= 0 && prt-> p != 0 && prt->nbr_p >= 0 && prt->conv != 0)
		ft_width_p(prt, count_char, args);
	if (prt-> flags != 0 && prt->nbr_f == -1 && prt-> p == 0 && prt->nbr_p < 0 && prt->conv != 0)
		ft_conv(prt, count_char, args);	
}
