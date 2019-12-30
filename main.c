#include "ft_printf.h"

int main()
{
    char *line;

	printf("%s", "\n\n****************************  CONV. NORMALES  ******************************\n\n");
    //printf("MY res %d\n", ft_printf("%d\n", 123));
    //printf("REEL %d\n\n", printf("%d\n", 123));
    //printf("MY res %d\n", ft_printf("%i\n", 321));
    //printf("REEL %d\n", printf("%i\n", 321));
	//printf("MY res %d\n\n", ft_printf("%u\n", 21474836));
	//printf("REEL %d\n", printf("%u\n", 21474836));
	//printf("MY res %d\n\n", ft_printf("%x\n", 123));
	//printf("REEL %d\n", printf("%x\n", 123));
	//printf("MY res %d\n\n", ft_printf("%X\n", 123));
	//printf("REEL %d\n", printf("%X\n", 123));
	printf("MY res %d\n\n", ft_printf("%p\n", &line));
	printf("REEL %d\n", printf("%p\n", &line));
	//printf("MY res %d\n\n", ft_printf("%c\n", 'p'));
	//printf("REEL %d\n", printf("%c\n", 'p'));
	//printf("MY res %d\n\n", ft_printf("%c\n", 0));
	//printf("REEL %d\n", printf("%c\n", 0));
	//printf("MY res %d\n\n", ft_printf("%s\n", "bonjour les copains"));
	//printf("REEL %d\n", printf("%s\n", "bonjour les copains"));
	printf("%s", "\n\n*****************************   FLAGS MOINS  ***************************\n\n");
	printf("MY res %d\n\n", ft_printf("%-180s\n", "coucou"));
	printf("REEL %d\n", printf("%-180s\n", "coucou"));
	printf("MY res %d\n\n", ft_printf(".%-2d.\n", 123));
	printf("REEL %d\n", printf(".%-2d.\n", 123));
	printf("MY res %d\n\n", ft_printf(".%-1c.\n", 'p'));
	printf("REEL %d\n", printf(".%-1c.\n", 'p'));
	printf("MY res %d\n\n", ft_printf(".%-15u.\n", 252525));
	printf("REEL %d\n", printf(".%-15u.\n", 252525));
	printf("MY res %d\n\n", ft_printf(".%-1x.\n", 123));
	printf("REEL %d\n", printf(".%-1x.\n", 123));
	printf("MY res %d\n\n", ft_printf(".%-9X.\n", 123));
	printf("REEL %d\n", printf(".%-9X.\n", 123));
	printf("MY res %d\n\n", ft_printf(".%-20p.\n", &line));
	printf("REEL %d\n", printf(".%-20p.\n", &line));
	printf("%s", "\n\n*****************************   FLAGS ETOILES ***************************\n\n");
	//printf("MY res %d\n", ft_printf(".%.180s.\n", "coucou"));
	printf("REEL %d\n\n", printf(".%.5s.\n", "coucou"));
	//printf("MY res %d\n", ft_printf(".%.180s.\n", "coucou"));
	//printf("REEL %d\n\n", printf(".%.180s.\n", "coucou"));
	//printf("MY res %d\n", ft_printf(".%.180s.\n", "coucou"));
	//printf("REEL %d\n\n", printf(".%.180s.\n", "coucou"));
	//printf("MY res %d\n", ft_printf(".%.180s.\n", "coucou"));
	//printf("REEL %d\n\n", printf(".%.180s.\n", "coucou"));
	//printf("MY res %d\n", ft_printf(".%.180s.\n", "coucou"));
	//printf("REEL %d\n\n", printf(".%.180s.\n", "coucou"));
	//printf("MY res %d\n", ft_printf(".%.180s.\n", "coucou"));
	//printf("REEL %d\n\n", printf(".%.180s.\n", "coucou"));
    //printf("MY res %d\n", ft_printf("%d\n%i\n%u\n%x\n%X\n%p\n%s\n%c\n", 123, 321, 2147483650, 4569695, 4569695, &line, "bonjour les copains", 'c'));
    //printf("REEL %d\n", printf("%d\n%i\n%ld\n%x\n%X\n%p\n%s\n%c\n", 123, 321, 2147483650, 4569695, 4569695, &line, "bonjour les copains", 'c'));
    return (0);
}