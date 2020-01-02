#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_printf(const char *list, ...);

void	ft_parse(const char *str, int *i, va_list args, int *count_char);

void	ft_flag_right_space(const char *str, int *i, va_list args, int *count_char);
void	ft_flag_left_zero(const char *str, int *i, va_list args, int *count_char);
void	ft_flag_zero(const char *str, int *i, va_list args, int *count_char);
void    ft_flags_left_space(const char *str, int *i, va_list args, int *count_char);
void    ft_flag_stars(const char *str, int *i, va_list args, int *count_char);

void    ft_c_left_space(int nbr, va_list args, int *count_char);
void    ft_c_right_space(int nbr, va_list args, int *count_char);

void	ft_u_left_space(int nbr, va_list args, int *count_char);
void	ft_u_right_space(int nbr, va_list args, int *count_char);
void	ft_u_left_zero(int nbr, va_list args, int *count_char);

void    ft_s_left_space(int nbr, va_list args, int *count_char);
void    ft_s_right_space(int nbr, va_list args, int *count_char);
void    ft_s_left_zero(int nbr, va_list args, int *count_char);

void    ft_di_left_space(int nbr, va_list args, int *count_char);
void    ft_di_right_space(int nbr, va_list args, int *count_char);
void    ft_di_left_zero(int nbr, va_list args, int *count_char);

void    ft_x_flags_space(int nbr, va_list args, int *count_char);
void    ft_x_right_space(int nbr, va_list args, int *count_char);
void    ft_x_left_zero(int nbr, va_list args, int *count);

void    ft_maj_x_left_space(int nbr, va_list args, int *count_char);
void    ft_maj_x_right_space(int nbr, va_list args, int *count_char);
void    ft_maj_x_left_zero(int nbr, va_list args, int *count_char);

void    ft_p_left_space(int nbr, va_list args, int *count_char);
void    ft_p_right_space(int nbr, va_list args, int *count_char);

int		ft_strlen(char *str);
int		ft_unsigned_len(unsigned int nb);
int		ft_intlen(int nb);
int		ft_hexa_len(unsigned long int nb);

void    ft_putchar(char u);
void    ft_putchar_c(char u, int *count_char);
void    ft_putstr_c(char *str, int *count_char);

void	ft_putnbr_hexa(unsigned long int n, int *count_char);
void    ft_putnbrdi(int n, int *count_char);
void    ft_putnbru(unsigned long int n, int *count_char);
void	ft_putnbr_hexa_maj(unsigned long int n, int *count_char);
void    ft_adres(unsigned long int nb, int *count_char);

#endif
