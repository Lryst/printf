#include "ft_printf.h"

void	ft_putchar(char u)
{
	write(1, &u ,1);
}

void    ft_putchar_c(char u, int *count_char)
{
    write(1, &u, 1);
	*count_char = *count_char +1;
}

void	ft_putstr_c(char *str, int *count_char)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar_c(str[i], count_char);
		i++;
	}
}