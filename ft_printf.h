#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_printf(const char *list, ...);

//void	ft_flag_left_space(const char *str, int *i, va_list args, int *count_char);
//void	ft_flag_arg(const char *str, int *i, va_list args, int *count_char);
//void	ft_flag_precision(const char *str, int *i, va_list args, int *count_char);
void	ft_flag_right_space(const char *str, int *i, va_list args, int *count_char);

void    ft_flags_prefix(int nbr, char type, char *str, int *count_char);
//void	ft_flags_suffix(int nbr, char type, char *str, int *count_char);
void    ft_flags_prefix_int(int nbr, char type, int args, int *count_char);

void	ft_parse(const char *str, int *i, va_list args, int *count_char);
//char    *ft_parse_after_zero(const char *str, int *i, va_list args, int *count_char);
void    ft_parse_after_moins(const char *str, int *i, va_list args, int *count_char);
//char    *ft_parse_after_min(const char *str, int *i, va_list args, int *count_char);
//char    *ft_parse_after_point(const char *str, int *i, va_list args, int *count_char);


void    ft_putchar(char u);
void    ft_putchar_c(char u, int *count_char);
void    ft_putstr_c(char *str, int *count_char);

//void	ft_di_int(va_list args, int *count_char);
//void	ft_unsigned_int(va_list args, int *count_char);
//void	ft_hexa(va_list args, int *count_char);
//void	ft_hexa_maj(va_list args, int *count_char);
void    ft_adres(unsigned long int nb, int *count_char);

int		ft_strlen(char *str);
int		ft_unsigned_len(unsigned int nb);
int		ft_intlen(int nb);

void	ft_putnbr_hexa(unsigned long int n, int *count_char);
void    ft_putnbrdi(int n, int *count_char);
void    ft_putnbru(unsigned long int n, int *count_char);
void	ft_putnbr_hexa_maj(unsigned long int n, int *count_char);

//char    *ft_itoa_base_int(int args, char *base);
//char	*ft_itoa_base_unsigned_int(unsigned int args, char *base);
char	*ft_itoa(int nb);
//size_t	digit_count(long nb, int base);

#endif
