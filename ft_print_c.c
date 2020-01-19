#include "ft_printf.h"

void	ft_c_right(t_flags *prt, va_list args, size_t *count_char)
{
	int n;

	n = 0;
	ft_putchar_c(va_arg(args, int), count_char);
	while (n++ < ((prt->nbr_f) - 1))
		ft_putchar_c(' ', count_char);
}

void	ft_c_left(t_flags *prt, char q, va_list args, size_t *count_char)
{
	int n;

	n = 0;
	while (n++ < ((prt->nbr_f) - 1))
		ft_putchar_c(q , count_char);
	ft_putchar_c(va_arg(args, int), count_char);
}
