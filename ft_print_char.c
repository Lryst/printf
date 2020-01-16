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

	if (str == NULL)
	{
		ft_putstr_c("(null)", count_char);
		return;
	}
	i = ft_strlen(str);	
	write(1, str, i);
	*count_char = *count_char + i;
}

char	*ft_strcpy(char *dst, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
