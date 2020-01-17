#include "ft_printf.h"

void	ft_full_flags(t_flags *prt, size_t *count_char, va_list args)
{
	int n;
	unsigned long u;
	size_t tmp;

	n = 0;
	u = 0;
	tmp = 0;
	if (prt->flags == 2)
	{
		ft_precision(prt, &u, args);
		*count_char = *count_char + u;
		if (u < ((unsigned int)prt->nbr_f))
		{
			while (u++ < (unsigned int)prt->nbr_f)
				ft_putchar_c(' ', count_char);
		}
	}
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
