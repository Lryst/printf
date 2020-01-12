#include "ft_printf.h"

int main ()
{
    ft_printf("%00000-----000---0000--36.98d\n\n", 42);
    printf("%00000-----000---0000--36.98d\n", 42);
    return (0);
}