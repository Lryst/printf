#include "ft_printf.h"

void	ft_s_width_p2(t_flags *prt, size_t *count_char, int i,char *str)
{
	if (prt->nbr_p < 6)
	{
		while (i++ < ((prt->nbr_f) - (prt->nbr_p)))
			ft_putchar_c(' ', count_char);
		i = -1;
		while (++i < prt->nbr_p)
			ft_putchar_c(str[i], count_char);
	}
	else if (prt->nbr_p >= 6)
	{
		i = 0;
		while (i++ < ((prt->nbr_f - prt->nbr_p)))
				ft_putchar_c(' ', count_char);
		i = 0;
		while (i++ < ((prt->nbr_p) - 6))
			ft_putchar_c(' ' , count_char);
		ft_putstr_c(str, count_char);
	}	
}

void	ft_s_width_p3(t_flags *prt, size_t *count_char, int i, char *str)
{
	int len;

	len = ft_strlen(str);
	if (prt->nbr_p < len)
	{
		while (i++ < ((prt->nbr_f) - (prt->nbr_p)))
			ft_putchar_c(' ', count_char);
		i = -1;
		while (++i < prt->nbr_p)
			ft_putchar_c(str[i], count_char);
	}
	else if (prt->nbr_p >= len)
	{
		i = 0;
		while (i++ < ((prt->nbr_f - prt->nbr_p)))
				ft_putchar_c(' ', count_char);
		i = 0;
		while (i++ < ((prt->nbr_p) - len))
			ft_putchar_c(' ' , count_char);
		ft_putstr_c(str, count_char);
	}	
}

void	ft_s_width_p(t_flags *prt, va_list args, size_t *count_char)
{
	int i;
	char *str;
	char *null;

	i = 0;
	str = va_arg(args, char*);
	null = "(null)";
	if (str != NULL)
		ft_s_width_p3(prt, count_char, i, str);
	if (str == NULL)
		ft_s_width_p2(prt, count_char, i, null);
}