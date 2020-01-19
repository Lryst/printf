#include "ft_printf.h"

void	ft_s_left_space(t_flags *prt, char q, va_list args, size_t *count_char)
{
	int i;
	int len;
	char *str;

	i = 0;
	str = va_arg(args, char*);
	if (str == NULL)
	{
		while (i++ < ((prt->nbr_f) - 6))
			ft_putchar_c(q , count_char);
		ft_putstr_c("(null)", count_char);
	}
	if (str != NULL)
	{
		len = ft_strlen(str);
		while (i++ < ((prt->nbr_f) - len))
			ft_putchar_c(q , count_char);
		ft_putstr_c(str, count_char);
	}
}

void	ft_s_right(t_flags *prt, va_list args, size_t *count_char)
{
	int i;
	char *str;

	str = va_arg(args, char*);
	if (str != NULL)
	{
		i = ft_strlen(str);
		ft_putstr_c(str, count_char);
		while (i++ < (prt->nbr_f))
			ft_putchar_c(' ', count_char);
	}
	else
	{
		i = 6;
		ft_putstr_c("(null)", count_char);
		while (i++ < (prt->nbr_f))
			ft_putchar_c(' ', count_char);
	}
}

void	ft_s_left_zero(t_flags *prt, va_list args, size_t *count_char)
{
	int u;
	char *s;
	int c;

	u = 0;
	s = va_arg(args, char*);
	c = ft_strlen(s);
	if (c > (prt->nbr_f))
	{
		while (u++ < (prt->nbr_f))
			ft_putchar_c(s[u], count_char);
	}
	else if (c < (prt->nbr_f))
		ft_putstr_c(s, count_char);
}
