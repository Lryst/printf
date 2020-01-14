#include "ft_printf.h"

int main()
{
    char *line;
	/*printf("%s", "\n\n****************************  CONV. NORMALES  ******************************\n\n");
    ft_printf("MY res %d\n", ft_printf("%d\n", 123));
    ft_printf("REEL %d\n\n", printf("%d\n", 123));
	ft_printf("MY res %d\n", ft_printf("%d\n", 123));
    ft_printf("REEL %d\n\n", printf("%d\n", 123));
   	ft_printf("MY res %d\n", ft_printf("%i\n", 321));
    ft_printf("REEL %d\n", printf("%i\n", 321));
	ft_printf("MY res %d\n\n", ft_printf("%u\n", 21474836));
	ft_printf("REEL %d\n", printf("%u\n", 21474836));
	ft_printf("MY res %d\n\n", ft_printf("%x\n", 1234567890));
	ft_printf("REEL %d\n", printf("%x\n", 1234567890));
	ft_printf("MY res %d\n\n", ft_printf("%X\n", 123));
	ft_printf("REEL %d\n", printf("%X\n", 123));
	ft_printf("MY res %d\n\n", ft_printf("%p\n", &line));
	ft_printf("REEL %d\n", printf("%p\n", &line));
	ft_printf("MY res %d\n\n", ft_printf("%c\n", 'p'));
	ft_printf("REEL %d\n", printf("%c\n", 'p'));
	ft_printf("MY res %d\n\n", ft_printf(".%c.\n", 0));
	ft_printf("REEL %d\n", printf(".%c.\n", 0));
	ft_printf("MY res %d\n\n", ft_printf("%s\n", "bonjour les copains !"));
	ft_printf("REEL %d\n", printf("%s\n", "bonjour les copains !"));
	ft_printf("%s", "\n\n*****************************   FLAGS MOINS  ***************************\n\n");
	ft_printf("MY res %d\n\n", ft_printf(".%-180s.\n", "coucou !"));
	ft_printf("REEL %d\n", printf(".%-180s.\n", "coucou ?"));
	ft_printf("MY res %d\n\n", ft_printf(".%-2d.\n", 123));
	ft_printf("REEL %d\n", printf(".%-2d.\n", 123));
	ft_printf("MY res %d\n\n", ft_printf(".%-1c.\n", 'p'));
	ft_printf("REEL %d\n", printf(".%-1c.\n", 'p'));
	ft_printf("MY res %d\n\n", ft_printf(".%-15u.\n", 252525));
	ft_printf("REEL %d\n", printf(".%-15u.\n", 252525));
	ft_printf("MY res %d\n\n", ft_printf(".%-1x.\n", 123));
	ft_printf("REEL %d\n", printf(".%-1x.\n", 123));
	ft_printf("MY res %d\n\n", ft_printf(".%-9X.\n", 123));
	ft_printf("REEL %d\n", printf(".%-9X.\n", 123));
	ft_printf("MY res %d\n\n", ft_printf(".%-2p.\n", &line));
	ft_printf("REEL %d\n", printf(".%-2p.\n", &line));
	ft_printf("%s", "\n\n*****************************   FLAGS POINT ***************************\n\n");
	ft_printf("MY res %d\n", ft_printf(".%.1i.\n", 42));
	ft_printf("REEL %d\n\n", printf(".%.1i.\n", 42));
	ft_printf("MY res %d\n", ft_printf(".%.18u.\n", 234567890));
	ft_printf("REEL %d\n\n", printf(".%.18u.\n", 234567890));
	ft_printf("MY res %d\n", ft_printf(".%.6x.\n", 890));
	ft_printf("REEL %d\n\n", printf(".%.6x.\n", 890));
	ft_printf("MY res %d\n", ft_printf(".%.18X.\n", 890));
	ft_printf("REEL %d\n\n", printf(".%.18X.\n", 890));
	ft_printf("MY res %d\n", ft_printf(".%.60s.\n", "coucou hibout coucou hibout !"));
	ft_printf("REEL %d\n\n", printf(".%.60s.\n", "coucou hibout coucou hibout !"));
	ft_printf("MY res %d\n", ft_printf(".%.9s.\n", "soir"));
	ft_printf("REEL %d\n\n", printf(".%.9s.\n", "soir"));
	ft_printf("%s", "\n\n*****************************   FLAGS ZERO ***************************\n\n");
	ft_printf("MY res %d\n", ft_printf(".%04d.\n", 42));
	ft_printf("REEL %d\n\n", printf(".%04d.\n", 42));
	ft_printf("MY res %d\n", ft_printf(".%04i.\n", 42));
	ft_printf("REEL %d\n\n", printf(".%04i.\n", 42));
	ft_printf("MY res %d\n", ft_printf(".%09x.\n", 349));
	ft_printf("REEL %d\n\n", printf(".%09x.\n", 349));
	ft_printf("MY res %d\n", ft_printf(".%09X.\n", 349));
	ft_printf("REEL %d\n\n", printf(".%09X.\n", 349));
	ft_printf("MY res %d\n", ft_printf(".%07u.\n", 42));
	ft_printf("REEL %d\n\n", printf(".%07u.\n", 42));
	ft_printf("MY res %d\n", ft_printf(".%07i.\n", 42));
	ft_printf("REEL %d\n\n", printf(".%07i.\n", 42));
	ft_printf("%s", "\n\n*****************************   FLAGS MIN ***************************\n\n");
	ft_printf("MY res %d\n", ft_printf(".%10s.\n", "coucou"));
	ft_printf("REEL %d\n\n", printf(".%10s.\n", "coucou"));
	ft_printf("MY res %d\n", ft_printf(".%5c.\n", 'c'));
	ft_printf("REEL %d\n\n", printf(".%5c.\n", 'c'));
	ft_printf("MY res %d\n", ft_printf(".%17p.\n", &line));
	ft_printf("REEL %d\n\n", printf(".%17p.\n", &line));
	ft_printf("MY res %d\n", ft_printf("[%5d]\n", -42));
	ft_printf("REEL %d\n\n", printf(".%5d.\n", -42));
	ft_printf("MY res %d\n", ft_printf(".%17x.\n", 42));
	ft_printf("REEL %d\n\n", printf(".%17x.\n", 42));
	ft_printf("MY res %d\n", ft_printf(".%17X.\n", 42));
	ft_printf("REEL %d\n\n", printf(".%17X.\n", 42));
	ft_printf("MY res %d\n", ft_printf(".%6i.\n", 42));
	ft_printf("REEL %d\n\n", printf(".%6i.\n", 42));
	ft_printf("MY res %d\n", ft_printf(".%*s.\n", 10,"coucou"));
	ft_printf("REEL %d\n\n", printf(".%*s.\n", 10,"coucou"));
	ft_printf("MY res %d\n", ft_printf(".%*c.\n", 5,'c'));
	ft_printf("REEL %d\n\n", printf(".%*c.\n", 5,'c'));
	ft_printf("MY res %d\n", ft_printf(".%*p.\n", 17,&line));
	ft_printf("REEL %d\n\n", printf(".%*p.\n", 17,&line));
	ft_printf("MY res %d\n", ft_printf(".%*d.\n", 5,42));
	ft_printf("REEL %d\n\n", printf(".%*d.\n", 5,42));
	ft_printf("MY res %d\n", ft_printf(".%*x.\n", 17,42));
	ft_printf("REEL %d\n\n", printf(".%*x.\n", 17,42));
	ft_printf("MY res %d\n", ft_printf(".%*X.\n", 17,42));
	ft_printf("REEL %d\n\n", printf(".%*X.\n", 17,42));
	ft_printf("MY res %d\n", ft_printf(".%*i.\n", 6, 42));
	ft_printf("REEL %d\n\n", printf(".%*i.\n", 6, 42));
	printf("%s", "\n\n*****************************   FLAGS STARS ***************************\n\n");
	//ft_printf("MY res %d\n", ft_printf(".%*s.\n", 2, "coucou"));
	//ft_printf("REEL %d\n\n", printf(".%*s.\n", 2, "coucou"));
	//ft_printf("MY res %d\n", ft_printf(".%*d.\n", 4, 42));
	//ft_printf("REEL %d\n\n", printf(".%*d.\n", 4, 42));
	//ft_printf("MY res %d\n", ft_printf(".%*u.\n", 9, 234));
	//ft_printf("REEL %d\n\n", printf(".%*u.\n", 9, 234));
	//ft_printf("MY res %d\n", ft_printf(".%*x.\n", 5, 234));
	//ft_printf("REEL %d\n\n", printf(".%*x.\n", 5, 234));
	//ft_printf("MY res %d\n", ft_printf(".%*X.\n", 0, 234));
	//ft_printf("REEL %d\n\n", printf(".%*X.\n", 0, 234));
	//ft_printf("MY res %d\n", ft_printf(".%*p.\n", 16, &line));
	//ft_printf("REEL %d\n\n", printf(".%*p.\n", 16, &line));
	//ft_printf("MY res %d\n", ft_printf(".%*c.\n", 8, 'c'));
	//ft_printf("REEL %d\n\n", printf(".%*c.\n", 8, 'c'));
	//ft_printf("MY res %d\n", ft_printf(".%%c.\n", 'a'));
	//ft_printf("REEL %d\n\n", printf(".%%c.\n", 'a'));

	//printf("%s", "\n\n***************************** DIFF  FLAGS ***************************\n\n");
	ft_printf("MY res %d\n", ft_printf(".%*c--%-3d--%9d %.45s.\n", 9,'a', 42, 123, "coucou hiboux coucou hibout !"));
	ft_printf("REEL %d\n\n", printf(".%*c--%-3d--%9d %.45s.\n", 9,'a', 42, 123, "coucou hiboux coucou hibout !"));

	//ft_printf("hahahaha\n");
	
	//ft_printf("MY res %d\n", ft_printf("ft_printf = [%09d]\n", -213));
	//ft_printf("REEL %d\n\n", printf(" printf = [%09d]\n", -213));
    //ft_printf("MY %d\n", ft_printf(".%16.9d.", 42));
    //ft_printf("MY %d", ft_printf(".%16.9d.", -42));
    //ft_printf(".%16.9d.\n", 42);
    //ft_printf("\n");
    //ft_printf("my %d\n", printf(".%16.9d.", -42));
    //ft_printf("my %d\n", printf(".%16.9d.", -42));
    //ft_printf("%d\n", ft_printf(".1 %c.", 'c'));
    //ft_printf("%d\n", printf(".2 %c.", 'c'));
    //ft_printf("my %d\n", printf(".%-16.9d.", -42));
    //ft_printf("REEL %d\n", printf(".%-16.9d.", -42));
    //ft_printf("%d\n", ft_printf(".%p.", &line));
    //ft_printf("%d\n", printf(".%p.", &line));
    ft_printf("my %d\n", ft_printf(".%16.4s.\n", "coucou"));
    ft_printf("REEL %d\n", printf(".%16.4s.\n", "coucou"));
	ft_printf("my %d\n", ft_printf(".%.15s.\n", "coucou"));
    ft_printf("REEL %d\n", printf(".%.15s.\n", "coucou"));
	ft_printf("my %d\n", ft_printf(".%16.d.\n", 420));
    ft_printf("REEL %d\n", printf(".%16.d.\n", 420));
	ft_printf("my %d\n", ft_printf(".%16.1d.\n", -420));
    ft_printf("REEL %d\n", printf(".%16.1d.\n", -420));
	//ft_printf("my %d\n", ft_printf(".%16.4c.\n", 'c'));
    ft_printf("REEL %d\n", printf(".%16.4c.\n", 'c'));
	//ft_printf("my %d\n", ft_printf(".%16.4p.\n", &line));
    ft_printf("REEL %d\n", printf(".%16.4p.\n", &line));
	//ft_printf("my %d\n", ft_printf(".%16.9u.\n", 420));
    ft_printf("REEL %d\n", printf(".%16.9u.\n", 420));
	//ft_printf("my %d\n", ft_printf(".%16.1x.\n", -420));*/
    printf("REEL %d\n", printf(".%16.10d.\n", -42));
	/*//ft_printf("my %d\n", ft_printf(".%16.1X.\n", -420));
    ft_printf("REEL %d\n", printf(".%16.1X.\n", -420));
	
   
	//ft_printf("MY res %d\n", ft_printf(".%u.", -34));
	//ft_printf("REEL %d\n\n", printf(".%u.", -34));


	//ft_printf("MY res %d\n", ft_printf(".%16.9d.", -42));
	//ft_printf("REEL %d\n\n", printf(".%16.9d.", -42));
    //ft_printf("%d\n", ft_printf(".1 9%c.", 'c'));
    //ft_printf("%d\n", printf(".2 9%c.", 'c'));
    
    // printf("reel %s\n", "coucou !");*/

    return (0);
}
