#include "ft_printf.h"

int main()
{
    char *line;
	printf("%s", "\n\n****************************  CONV. NORMALES  ******************************\n\n");
    printf("MY res %d\n", ft_printf("%d\n", 123));
    printf("REEL %d\n\n", printf("%d\n", 123));
    printf("MY res %d\n", ft_printf("%i\n", 321));
    printf("REEL %d\n", printf("%i\n", 321));
	//printf("MY res %d\n\n", ft_printf("%u\n", 21474836));
	//printf("REEL %d\n", printf("%u\n", 21474836));
	//printf("MY res %d\n\n", ft_printf("%x\n", 1234567890));
	//printf("REEL %d\n", printf("%x\n", 1234567890));
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
	printf("MY res %d\n\n", ft_printf(".%-2p.\n", &line));
	printf("REEL %d\n", printf(".%-2p.\n", &line));
	printf("%s", "\n\n*****************************   FLAGS POINT ***************************\n\n");
	printf("MY res %d\n", ft_printf(".%.1i.\n", 42));
	printf("REEL %d\n\n", printf(".%.1i.\n", 42));
	printf("MY res %d\n", ft_printf(".%.18u.\n", 234567890));
	printf("REEL %d\n\n", printf(".%.18u.\n", 234567890));
	printf("MY res %d\n", ft_printf(".%.6x.\n", 890));
	printf("REEL %d\n\n", printf(".%.6x.\n", 890));
	printf("MY res %d\n", ft_printf(".%.18X.\n", 890));
	printf("REEL %d\n\n", printf(".%.18X.\n", 890));
	printf("MY res %d\n", ft_printf(".%.60s.\n", "coucou hibout coucou hibout !"));
	printf("REEL %d\n\n", printf(".%.60s.\n", "coucou hibout coucou hibout !"));
	printf("MY res %d\n", ft_printf(".%.4s.\n", "bonsoir"));
	printf("REEL %d\n\n", printf(".%.4s.\n", "bonsoir"));
	printf("%s", "\n\n*****************************   FLAGS ZERO ***************************\n\n");
	printf("MY res %d\n", ft_printf(".%04d.\n", 42));
	printf("REEL %d\n\n", printf(".%04d.\n", 42));
	printf("MY res %d\n", ft_printf(".%04i.\n", 42));
	printf("REEL %d\n\n", printf(".%04i.\n", 42));
	printf("MY res %d\n", ft_printf(".%09x.\n", 349));
	printf("REEL %d\n\n", printf(".%09x.\n", 349));
	printf("MY res %d\n", ft_printf(".%09X.\n", 349));
	printf("REEL %d\n\n", printf(".%09X.\n", 349));
	printf("MY res %d\n", ft_printf(".%07u.\n", 42));
	printf("REEL %d\n\n", printf(".%07u.\n", 42));
	printf("MY res %d\n", ft_printf(".%07i.\n", 42));
	printf("REEL %d\n\n", printf(".%07i.\n", 42));
	printf("%s", "\n\n*****************************   FLAGS MIN ***************************\n\n");
	printf("MY res %d\n", ft_printf(".%10s.\n", "coucou"));
	printf("REEL %d\n\n", printf(".%10s.\n", "coucou"));
	printf("MY res %d\n", ft_printf(".%5c.\n", 'c'));
	printf("REEL %d\n\n", printf(".%5c.\n", 'c'));
	printf("MY res %d\n", ft_printf(".%17p.\n", &line));
	printf("REEL %d\n\n", printf(".%17p.\n", &line));
	printf("MY res %d\n", ft_printf(".%5d.\n", 42));
	printf("REEL %d\n\n", printf(".%5d.\n", 42));
	printf("MY res %d\n", ft_printf(".%17x.\n", 42));
	printf("REEL %d\n\n", printf(".%17x.\n", 42));
	printf("MY res %d\n", ft_printf(".%17X.\n", 42));
	printf("REEL %d\n\n", printf(".%17X.\n", 42));
	printf("MY res %d\n", ft_printf(".%6i.\n", 42));
	printf("REEL %d\n\n", printf(".%6i.\n", 42));
	printf("MY res %d\n", ft_printf(".%*s.\n", 10,"coucou"));
	printf("REEL %d\n\n", printf(".%*s.\n", 10,"coucou"));
	printf("MY res %d\n", ft_printf(".%*c.\n", 5,'c'));
	printf("REEL %d\n\n", printf(".%*c.\n", 5,'c'));
	printf("MY res %d\n", ft_printf(".%*p.\n", 17,&line));
	printf("REEL %d\n\n", printf(".%*p.\n", 17,&line));
	printf("MY res %d\n", ft_printf(".%*d.\n", 5,42));
	printf("REEL %d\n\n", printf(".%*d.\n", 5,42));
	printf("MY res %d\n", ft_printf(".%*x.\n", 17,42));
	printf("REEL %d\n\n", printf(".%*x.\n", 17,42));
	printf("MY res %d\n", ft_printf(".%*X.\n", 17,42));
	printf("REEL %d\n\n", printf(".%*X.\n", 17,42));
	printf("MY res %d\n", ft_printf(".%*i.\n", 6, 42));
	printf("REEL %d\n\n", printf(".%*i.\n", 6, 42));
	printf("%s", "\n\n*****************************   FLAGS STARS ***************************\n\n");
	printf("MY res %d\n", ft_printf(".%*s.\n", 2, "coucou"));
	printf("REEL %d\n\n", printf(".%*s.\n", 2, "coucou"));
	printf("MY res %d\n", ft_printf(".%*d.\n", 4, 42));
	printf("REEL %d\n\n", printf(".%*d.\n", 4, 42));
	printf("MY res %d\n", ft_printf(".%*u.\n", 9, 234));
	printf("REEL %d\n\n", printf(".%*u.\n", 9, 234));
	printf("MY res %d\n", ft_printf(".%*x.\n", 5, 234));
	printf("REEL %d\n\n", printf(".%*x.\n", 5, 234));
	printf("MY res %d\n", ft_printf(".%*X.\n", 0, 234));
	printf("REEL %d\n\n", printf(".%*X.\n", 0, 234));
	printf("MY res %d\n", ft_printf(".%*p.\n", 16, &line));
	printf("REEL %d\n\n", printf(".%*p.\n", 16, &line));
	printf("MY res %d\n", ft_printf(".%*c.\n", 8, 'c'));
	printf("REEL %d\n\n", printf(".%*c.\n", 8, 'c'));
	printf("MY res %d\n", ft_printf(".%%c.\n", 'a'));
	printf("REEL %d\n\n", printf(".%%c.\n", 'a'));

	printf("%s", "\n\n***************************** DIFF  FLAGS ***************************\n\n");
	printf("MY res %d\n", ft_printf(".%*c--%-3d--%9d %.45s.\n", 9,'a', 42, 123, "coucou hiboux coucou hibout !"));
	printf("REEL %d\n\n", printf(".%*c--%-3d--%9d %.45s.\n", 9,'a', 42, 123, "coucou hiboux coucou hibout !"));

	printf("hahahaha\n");
	
	printf("MY res %d\n", ft_printf("ft_printf = [%09d]\n", -213));
	printf("REEL %d\n\n", printf(" printf = [%09d]\n", -213));
    //ft_printf("MY %d\n", ft_printf(".%16.9d.", 42));
    //ft_printf("MY %d", ft_printf(".%16.9d.", -42));
    //ft_printf(".%16.9d.\n", 42);
    printf("\n");
    printf("my %d\n", printf(".%16.9d.", -42));
    printf("my %d\n", printf(".%16.9d.", -42));
    printf("%d\n", ft_printf(".1 %c.", 'c'));
    printf("%d\n", printf(".2 %c.", 'c'));
    printf("my %d\n", printf(".%-16.9d.", -42));
    printf("REEL %d\n", printf(".%-16.9d.", -42));
    printf("%d\n", ft_printf(".%p.", &line));
    printf("%d\n", printf(".%p.", &line));
    printf("REEL %d\n", printf(".%16.9s.", "coucou"));
    printf("REEL %d\n", printf(".%16.9s.", "coucou"));
    printf("%d\n", ft_printf(".%u.", -34));
    printf("%d\n", printf(".%u.", -34));

    //ft_printf("REEL %d\n", printf(".%106.9d.", -42));
    //ft_printf("REEL %d", printf(".%016.9d.", -42));
    //ft_printf("%d\n", ft_printf(".1 9%c.", 'c'));
    //ft_printf("%d\n", printf(".2 9%c.", 'c'));
    
    // printf("reel %s\n", "coucou !");

    return (0);
}
