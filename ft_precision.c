#include "ft_printf.h"

void	ft_precision(t_flags *prt, size_t *count_char, va_list args)
{
	void *a;
	unsigned long long nbr;

	nbr = 0;
	(prt->conv == 1 || prt->conv == 2) ? ft_di_left_p(prt, '0',args, count_char) : 0;
	prt->conv == 3 ? ft_u_left_p(prt, '0',args, count_char) : 0;
	prt->conv == 4 ? ft_x_left_p(prt, '0',args, count_char) : 0;
	prt->conv == 5 ? ft_maj_x_left_p(prt, '0',args, count_char) : 0;
	prt->conv == 7 ? ft_s_left_zero_p(prt, args, count_char) : 0;
	prt->conv == 9 ? ft_putchar_c('%', count_char) : 0;
	if (prt->conv == 6 && prt->p == 1 && prt->nbr_p == 0 && prt->nbr_f == -1 && prt->flags == 0)
	{
		a = va_arg(args, void*);
		nbr = (unsigned long long)(a);
		if (a == NULL)
		{
			ft_putstr_c("0x", count_char);
			return;
		}
		ft_adres(nbr, count_char);
	}
}
