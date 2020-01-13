#include "ft_printf.h"

t_flags	fill_struct(t_flags *prt)
{
    prt->flags = 0;
    prt->nbr_f = -1;
    prt->p = 0;
    prt->nbr_p = -1;
    prt->conv = 0;
	return (*prt);
}

int        ft_printf(const char *list, ...)
{
    va_list args;
    size_t count_char;
    int i;

    count_char = 0;
    i = 0;
    va_start(args, list);
    while (list[i])
    {
        if (list[i] == '%')
        {
            //write(1, "\n--------DEBUT PRINTF-------\n", 30);
            ft_parse(list, &i, args, &count_char);
        }
        else
        {
            count_char++;
			ft_putchar(list[i]);
        }
        i++;
    }
    //write(1, "\n---------FIN PRINTF--------\n\n", 31);
    va_end(args);
    return(count_char);
}
