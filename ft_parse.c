#include "ft_printf.h"

void	ft_just_flag(t_flags *prt, size_t *count_char, va_list args)
{
	if (prt->flags == 1)
		ft_flag_z(prt, count_char, args);
	if (prt->flags == 2)
		ft_flags_m(prt, count_char, args);
}

void	ft_check_struct(t_flags *prt, size_t *count_char, va_list args)
{
	if (prt-> flags == 0 && prt->nbr_f == -1 && prt-> p == 0 && prt->nbr_p == -1 && prt->conv != 0)
		ft_conv(prt, count_char, args);
	if (prt-> flags != 0 && prt->nbr_f >= 0 && prt-> p == 0 && prt->nbr_p == -1 && prt->conv != 0)
		ft_just_flag(prt, count_char, args);
	if (prt-> flags == 0 && prt->nbr_f == -1 && prt-> p != 0 && prt->nbr_p >= 0 && prt->conv != 0)
		ft_precision(prt, count_char, args);
	if (prt-> flags == 0 && prt->nbr_f >= 0 && prt-> p == 0 && prt->nbr_p == -1 && prt->conv != 0)
		ft_width(prt, count_char, args);
	if (prt-> flags != 0 && prt->nbr_f >= 0 && prt-> p != 0 && prt->nbr_p >= 0 && prt->conv != 0)
		ft_full_flags(prt, count_char, args);
	if (prt-> flags == 0 && prt->nbr_f >= 0 && prt-> p != 0 && prt->nbr_p >= 0 && prt->conv != 0)
		ft_width_p(prt, count_char, args);
}

t_flags	*ft_parse_conv(const char *str, int *i, t_flags *prt)
{
	str[*i] == 'd' ? prt->conv = 1 : 0;
    str[*i] == 'i' ? prt->conv = 2 : 0;
    str[*i] == 'u' ? prt->conv = 3 : 0;
    str[*i] == 'x' ? prt->conv = 4 : 0;
    str[*i] == 'X' ? prt->conv = 5 : 0;
    str[*i] == 'p' ? prt->conv = 6 : 0;
    str[*i] == 's' ? prt->conv = 7 : 0;
    str[*i] == 'c' ? prt->conv = 8 : 0;
	return (prt);
}

void	ft_parse(const char *str, int *i, va_list args, size_t *count_char)
{
	t_flags prt;
	
	prt = fill_struct(&prt);
	*i = *i + 1;
	while(str[*i] == '0' || str[*i] == '-')
    {
		if (str[*i] == '0')
		{
 			prt.flags = 1;
			*i = *i + 1;
		}
		if (str[*i] == '-')
		{
			prt.flags = 2;
			while(str[*i] == '0' || str[*i] == '-')
				*i = *i + 1;
		}
    }
	if (str[*i] == '*')
	{
		prt.nbr_f = va_arg(args, int);
		*i = *i + 1;
	}
	if (str[*i] > '0' && str[*i] <= '9')
		prt.nbr_f = ft_count_nbr(str, i);
	if (str[*i] == '.')
	{
		prt.p = 1;
		*i = *i + 1;
		str[*i] == '*' ? (prt.nbr_p = va_arg(args, int)) : (prt.nbr_p = ft_count_nbr(str, i));
	}
	ft_parse_conv(str, i, &prt);
	//printf("flags -> %i | nbr flags  -> %i | p -> %i | nbr p -> %i | conv -> %i\n", prt.flags, prt.nbr_f, prt.p, prt.nbr_p, prt.conv);
	ft_check_struct(&prt, count_char, args);
}
