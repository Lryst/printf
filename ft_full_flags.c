#include "ft_printf.h"

void	ft_just_flag(t_flags *prt, size_t *count_char, va_list args)
{
	if (prt->flags == 1)
		ft_flag_z(prt, count_char, args);
	if (prt->flags == 2)
		ft_flags_m(prt, count_char, args);
}

void	ft_full_flags_m(t_flags *prt, size_t *count_char, va_list args)
{
	int n;
	unsigned long u;
	size_t tmp;

	n = 0;
	u = 0;
	tmp = 0;
	ft_precision(prt, &u, args);
	*count_char = *count_char + u;
	if (u < ((unsigned int)prt->nbr_f))
	{
		while (u++ < (unsigned int)prt->nbr_f)
			ft_putchar_c(' ', count_char);
	}
}

void	ft_full_flags(t_flags *prt, size_t *count_char, va_list args)
{
	if (prt->flags == 2)
		ft_full_flags_m(prt, count_char, args);
	if (prt->flags == 1)
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
}
