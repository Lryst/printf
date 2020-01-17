#include "ft_printf.h"

void    ft_s_left_space(t_flags *prt, char q, va_list args, size_t *count_char)
{
    int i;
    int len;
    char *str;

    i = 0;
    str = va_arg(args, char*);
    if (str == NULL)
	{
        while (i < ((prt->nbr_f) - 6))
        {
            ft_putchar_c(q , count_char);
            i++;
        }
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

void    ft_s_right(t_flags *prt, va_list args, size_t *count_char)
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
			i++;
	}
}

void    ft_s_left_zero(t_flags *prt, va_list args, size_t *count_char)
{
    int u;
    char *s;
    int c;

    u = 0;
    s = va_arg(args, char*);
    c = ft_strlen(s);
    if (c > (prt->nbr_f))
    {
        while (u < (prt->nbr_f))
        {
            ft_putchar_c(s[u], count_char);
            u++;
        }
    }
    else if (c < (prt->nbr_f))
        ft_putstr_c(s, count_char);
}

void    ft_s_left_zero_p(t_flags *prt, va_list args, size_t *count_char)
{
    int u;
    char *s;
    int c;
	char null[6] = "(null)";

    u = -1;
    s = va_arg(args, char*);
	if (s == NULL)
	{
		if (6 >= (prt->nbr_p))
		{
			while (++u < (prt->nbr_p))
				ft_putchar_c(null[u], count_char);
		}
		else if (6 < (prt->nbr_p))
			ft_putstr_c(null, count_char);
	}
	else
	{
		c = ft_strlen(s);
		if (c > (prt->nbr_p))
		{
			while (++u < (prt->nbr_p))
			{
				ft_putchar_c(s[u], count_char);
			}
		}
		else if (c <= (prt->nbr_p))
		{
			ft_putstr_c(s, count_char);
		}			
	}
}

void	ft_s_width_p(t_flags *prt, va_list args, size_t *count_char)
{
	int i;
    int len;
    char *str;
	char null[6] = "(null)";

    i = 0;
    str = va_arg(args, char*);
	if (str != NULL)
	{
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
    if (str == NULL)
	{
		i = 0;
		len = 6 ;
		if (prt->nbr_p < len)
		{
			while (i++ < ((prt->nbr_f) - (prt->nbr_p)))
				ft_putchar_c(' ', count_char);
			i = -1;
			while (++i < prt->nbr_p)
				ft_putchar_c(null[i], count_char);
		}
		else if (prt->nbr_p >= len)
		{
			i = 0;
			while (i++ < ((prt->nbr_f - prt->nbr_p)))
					ft_putchar_c(' ', count_char);
			i = 0;
			while (i++ < ((prt->nbr_p) - len))
				ft_putchar_c(' ' , count_char);
			ft_putstr_c(null, count_char);
		}	
	}
}

void	ft_s_left_wp(t_flags *prt, va_list args, size_t *count_char)
{
	char *str;
	int len;
	int i;
	char null[6] = "(null)";

	i = -1;
	len = 0;
	str = va_arg(args, char *);
	if (str == NULL)
	{
		if (6 >= (prt->nbr_p))
		{
			while (++i < (prt->nbr_p))
				ft_putchar_c(null[i], count_char);
		}
		else if (6 < (prt->nbr_p))
		{
			if (6 < prt->nbr_f)
			{
				while (++i < (prt->nbr_f - len))
				ft_putchar_c(' ', count_char);
			}
			ft_putstr_c(null, count_char);
		}
	}
	else
	{
		len = ft_strlen(str);
		if (len >= (prt->nbr_p))
		{
			i = -1;
			if (len <= prt->nbr_f)
			{
				while (++i < (prt->nbr_f - len))
				ft_putchar_c(' ', count_char);
			}
			i = -1;
			while (++i < (prt->nbr_p))
			{
				ft_putchar_c(str[i], count_char);
			}
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
}