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
	//printf("count_char : %d\n", (int)count_char);
	//printf("i : %d\n", i);
	write(1, str, i);
	*count_char = *count_char + i;
	//printf("count_char : %d\n", (int)count_char);
}

void	ft_putstr_s(va_list args, size_t *count_char)
{
	char *str;
	int i;

	str = va_arg(args, char*);
	i = 0;
	while (str[i])
	{
		ft_putchar_c(str[i], count_char);
		i++;
	}
}

void	ft_check_str(va_list args, size_t *count_char)
{
	char *output;

	output = va_arg(args, char*);
	if (output == NULL)
	{
		*count_char = *count_char + 6;
		write(1, "(null)", 6);
	}
	else
		ft_putstr_c(output, count_char);
}
