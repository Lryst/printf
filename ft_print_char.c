#include "ft_printf.h"

void	ft_putchar(char u)
{
	write(1, &u, 1);
}

void    ft_putchar_c(char u, size_t *count_char)
{
    write(1, &u, 1);
	*count_char = *count_char +1;
}

void	ft_putstr_c(char *str, size_t *count_char)
{
	int i;

	i = ft_strlen(str);
	write(1, str, i);
	*count_char = *count_char + i;
}
