#include "ft_printf.h"

void	ft_s_left_zero_p2(t_flags *prt, size_t *count_char)
{
	int u;
	char *null;

	null = "(null)";
	u = -1;
	if (6 >= (prt->nbr_p))
	{
		while (++u < (prt->nbr_p))
			ft_putchar_c(null[u], count_char);
	}
	else if (6 < (prt->nbr_p))
		ft_putstr_c("(null)", count_char);
}

void	ft_s_left_zero_p(t_flags *prt, va_list args, size_t *count_char)
{
	int u;
	char *s;
	int c;

	u = -1;
	s = va_arg(args, char*);
	if (s == NULL)
		ft_s_left_zero_p2(prt, count_char);
	else
	{
		c = ft_strlen(s);
		if (c > (prt->nbr_p))
		{
			while (++u < (prt->nbr_p))
				ft_putchar_c(s[u], count_char);
		}
		else if (c <= (prt->nbr_p))
			ft_putstr_c(s, count_char);		
	}
}