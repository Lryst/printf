#include "ft_printf.h"

void	ft_s_left_wp2(t_flags *prt, size_t *count_char, char *str)
{
	int i;

	i = -1;
	if (6 >= (prt->nbr_p))
	{
		while (++i < (prt->nbr_p))
			ft_putchar_c(str[i], count_char);
	}
	else if (6 < (prt->nbr_p))
	{
		if (6 < prt->nbr_f)
		{
			while (++i < (prt->nbr_f - 6))
				ft_putchar_c(' ', count_char);
		}
		ft_putstr_c(str, count_char);
	}
}

void ft_s_left_wp3(t_flags *prt, size_t *count_char, int len, char * str)
{
	int i;

	i = -1;
	if (len >= (prt->nbr_p))
	{
		if (len <= prt->nbr_f)
		{
			while (++i < (prt->nbr_f - len))
			ft_putchar_c(' ', count_char);
		}
		i = -1;
		while (++i < (prt->nbr_p))
			ft_putchar_c(str[i], count_char);
	}
	else if (len < (prt->nbr_p))
	{
		if (len <= prt->nbr_f)
		{
			while (++i < (prt->nbr_f - len))
			ft_putchar_c(' ', count_char);
		}
		ft_putstr_c(str, count_char);
	}
}

void	ft_s_left_wp(t_flags *prt, va_list args, size_t *count_char)
{
	char *str;
	int len;
	int i;
	char *null;

	i = -1;
	len = 0;
	str = va_arg(args, char *);
	null = "(null)";
	if (str == NULL)
		ft_s_left_wp2(prt, count_char, null);
	else
	{
		len = ft_strlen(str);
		ft_s_left_wp3(prt, count_char, len, str);
	}
}