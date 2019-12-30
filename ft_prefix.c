#include "ft_printf.h"

/*char    *ft_flags_prefix(int nbr, char type, char *str)
{
    char 		*ret;
    int    	n;
    int 		c;

    n = 0;
    c = 0;
    ret = (char*)malloc(sizeof(char) * nbr + 1);
    while (n < (nbr - c))
    {
        ret[n] = type;
        n++;
    }
    while(str[c] > nbr)
    {
        ret[n] = str[c];
        n--;
        c--;
    }
    return (ret);
}

//char    *ft_flags_suffix(int nbr, char type, char *str)
{
    char *ret;
    int    n;

    n = 0;
    ret = (char*)malloc(sizeof(char) * nbr + 1);
    while (str[n])
    {
        ret[n] = str[n];
        n++;
    }
    while(n < nbr)
    {
        ret[n] = type;
        n++;
    }
    ret[n] = '\0';
    return (ret);
}
*/