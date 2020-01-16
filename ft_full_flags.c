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
		if (u < ((unsigned long int)prt->nbr_f))
		{
			while (u++ < (unsigned long int)prt->nbr_f)
				ft_putchar_c(' ', count_char);
		}
	}
	if (prt->flags == 1)
	{
		ft_precision(prt, &u, args);
		*count_char = *count_char + u;
		if ((prt->nbr_f > prt->nbr_p) && u < (unsigned long int)prt->nbr_f)
		{
			while (u++ < (unsigned long int)prt->nbr_f)
				ft_putchar_c('0', count_char);
		}
	}
}
