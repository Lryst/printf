#include "ft_printf.h"

int        ft_printf(const char *list, ...)
{
    va_list args;
    int count_char;
    int i;

    count_char = 0;
    i = -1;
    va_start(args, list);
    while (list[++i])
    {
        if (list[i] == '%')
            ft_parse(list, &i, args, &count_char);
        else
        {
			ft_putchar(list[i]);
			count_char++;
        }
    }
    va_end(args);
    return(count_char);
}