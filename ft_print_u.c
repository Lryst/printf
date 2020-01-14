#include "ft_printf.h"

void    ft_putnbru(unsigned long int n, size_t *count_char)
{
    if (n > 9)
    {
        ft_putnbru(n / 10, count_char);
        ft_putnbru(n % 10, count_char);
    }
    else
        ft_putchar_c(n + 48, count_char);  
}

void	ft_u_left(t_flags *prt, char q, va_list args, size_t *count_char)
{
	unsigned int u;
	unsigned int c;
	unsigned int n;
	unsigned int i;

	n = 0;
	u = va_arg(args, unsigned int);
	c = ft_unsigned_len(u);
	if ((unsigned int)(prt->nbr_f) > c)
	{
		i = (prt->nbr_f) - c;
		while (n++ < i)
			ft_putchar_c(q, count_char);
	}
	ft_putnbru(u, count_char);
}

void	ft_u_right(t_flags *prt, va_list args, size_t *count_char)
{
	int u;
	int c;
	int n;

	n = 0;
	u = va_arg(args, unsigned int);
	c = ft_unsigned_len(u);
	ft_putnbru(u, count_char);
	while (n < ((prt->nbr_f) - c))
	{
		ft_putchar_c(' ', count_char);
		n++;
	}
}

void	ft_u_left_p(t_flags *prt, char q, va_list args, size_t *count_char)
{
	unsigned int u;
	unsigned int c;
	unsigned long int n;

	n = 0;
	u = va_arg(args, unsigned int);
	c = ft_unsigned_len(u);
	while (n < ((unsigned long int)(prt->nbr_p) - c))
	{
		ft_putchar_c(q, count_char);
		n++;
	}
	ft_putnbru(u, count_char);
}

void	ft_u_width_p(t_flags *prt, va_list args, size_t *count_char)
{
	int len;
    unsigned long int nbr;
    int i;

    i = 0;
    nbr = va_arg(args, unsigned long int);
    len = ft_unsigned_len(nbr);
    if (prt->nbr_p < len)
    {
        while (i++ < ((prt->nbr_f) - len))
            ft_putchar_c(' ', count_char);

    }
    else if (prt->nbr_p > len)
    {
        i = 0;
		while (i++ < ((prt->nbr_f - prt->nbr_p)))
				ft_putchar_c(' ', count_char);
		i = 0;
		while (i++ < ((prt->nbr_p) - len))
			ft_putchar_c('0' , count_char);
    }
	ft_putnbru(nbr, count_char);
}
