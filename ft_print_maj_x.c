#include "ft_printf.h"

void	ft_maj_x_truc(t_flags *prt, int len, size_t *count_char)
{
	int i;

	i = 0;
	if (prt->nbr_p < len)
	{
		while (i++ < ((prt->nbr_f) - len))
			ft_putchar_c(' ', count_char);
	}
	else if (prt->nbr_p >= len)
	{
		while (i++ < ((prt->nbr_f - prt->nbr_p)))
				ft_putchar_c(' ', count_char);
		i = 0;
		while (i++ < ((prt->nbr_p) - len))
			ft_putchar_c('0' , count_char);
	}
}

void	ft_maj_x_left(t_flags *prt, char q, va_list args, size_t *count_char)
{
	int n;
	int c;
	unsigned int u;

	n = 0;
	u = va_arg(args, unsigned int);
	c = ft_hexa_len(u);
	if (u == 0 && prt->nbr_p == 0)
	{
		return;
	}
	if (c < prt->nbr_f)
	{
		while ((n++) + c < (prt->nbr_f))
			ft_putchar_c(q, count_char);
	}
	ft_putnbr_hexa_maj(u, count_char);
}

void	ft_maj_x_right(t_flags *prt, va_list args, size_t *count_char)
{
	int tmp;
	int c;
	unsigned int n;

	n = 0;
	tmp = *count_char;
	ft_putnbr_hexa_maj(va_arg(args, unsigned int), count_char);
	c = *count_char - tmp;
	while (n + c < ((unsigned int)prt->nbr_f))
	{
		ft_putchar_c(' ', count_char);
		n++;
	}
}

void	ft_maj_x_left_p(t_flags *prt, char q, va_list args, size_t *count_char)
{
	unsigned int u;
	int c;
	unsigned int n;

	n = 0;
	u = va_arg(args, unsigned int);
	c = ft_hexa_len(u);
	if (u == 0 && prt->nbr_p == 0)
	{
		return;
	}
	if (c < prt->nbr_p)
	{
		while ((n++) + c < ((unsigned int)prt->nbr_p))
			ft_putchar_c(q, count_char);
	}
	ft_putnbr_hexa_maj(u, count_char);
}

void	ft_maj_x_width_p(t_flags *prt, va_list args, size_t *count_char)
{
	int i;
	int len;
	unsigned int nbr;

	i = 0;
	nbr = va_arg(args, unsigned int);
	len = ft_hexa_len(nbr);
	if (nbr == 0 && prt->nbr_p == 0)
	{
		while(i++ < prt->nbr_f)
			ft_putchar_c(' ', count_char);
		return;
	}
	if (prt->nbr_f > 0)
		ft_maj_x_truc(prt, len, count_char);
	ft_putnbr_hexa_maj(nbr, count_char);
}
