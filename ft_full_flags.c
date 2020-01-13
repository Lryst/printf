#include "ft_printf.h"

void	ft_full_flags(t_flags *prt, size_t *count_char, va_list args)
{
	int n;

	n = 0;
	if (prt->flags == 2)
	{
		ft_precision(prt, count_char, args);
		if ((prt->nbr_f) > prt->nbr_p)
		{
			n = (prt->nbr_f) - (prt->nbr_p);
			write(1, " ", n);
			*count_char = *count_char + n;
		}
	}
	if (prt->flags == 1)
	{
		if ((prt->nbr_f) > prt->nbr_p)
		{
			n = (prt->nbr_f) - (prt->nbr_p);
			write(1, "0", n);
			*count_char = *count_char + n;
		}
		ft_precision(prt, count_char, args);
	}
}