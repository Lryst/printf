#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct  t_flags
{
    int flags;
    int nbr_f;
    int p;
    int nbr_p;
    int conv;
}				t_flags;

t_flags	fill_struct(t_flags *prt);

int		ft_printf(const char *list, ...);

t_flags	*ft_parse_conv(const char *str, int *i, t_flags *prt);
void	ft_parse(const char *str, int *i, va_list args, size_t *count_char);

void	ft_putchar(char u);
void	ft_putchar_c(char u, size_t *count_char);
void	ft_check_str(va_list args, size_t *count_char);
void	ft_putstr_c(char *str, size_t *count_char);
void	ft_putstr_s(va_list args, size_t *count_char);

void	ft_conv(t_flags *prt, size_t *count_char, va_list args);

void	ft_just_flag(t_flags *prt, size_t *count_char, va_list args);
void	ft_flags_m(t_flags *prt, size_t *count_char, va_list args);
void	ft_flag_z(t_flags *prt, size_t *count_char, va_list args);
void	ft_precision(t_flags *prt, size_t *count_char, va_list args);

void    ft_x_left(t_flags *prt, char q, va_list args, size_t *count_char);
void    ft_maj_x_left(t_flags *prt, char q, va_list args, size_t *count_char);
void    ft_s_left_space(t_flags *prt, char q, va_list args, size_t *count_char);
void    ft_s_left_zero(t_flags *prt, va_list args, size_t *count_char);
void    ft_di_left(t_flags *prt, char q, va_list args, size_t *count_char);
void	ft_u_left(t_flags *prt, char q, va_list args, size_t *count_char);
void    ft_p_left(t_flags *prt, char q, va_list args, size_t *count_char);
void    ft_c_left(t_flags *prt, char q, va_list args, size_t *count_char);

void	ft_width(t_flags *prt, size_t *count_char, va_list args);
void	ft_width_p(t_flags *prt, size_t *count_char, va_list args);

void	ft_di_width_p(t_flags *prt, va_list args, size_t *count_char);
void	ft_u_width_p(t_flags *prt, va_list args, size_t *count_char);
void	ft_x_width_p(t_flags *prt, va_list args, size_t *count_char);
void	ft_maj_x_width_p(t_flags *prt, va_list args, size_t *count_char);
void	ft_s_width_p(t_flags *prt, va_list args, size_t *count_char);

void	ft_putnbru(unsigned long int n, size_t *count_char);
void	ft_putnbrdi(int n, size_t *count_char);
void	ft_adres(unsigned long int nb, size_t *count_char);
void	ft_putnbr_hexa(unsigned long int n, size_t *count_char);
void	ft_putnbr_hexa_maj(unsigned long int n, size_t *count_char);

void	ft_full_flags(t_flags *ptr, size_t *count_char, va_list args);

void	ft_check_struct(t_flags *prt, size_t *count_char, va_list args);

int     ft_count_nbr(const char *str, int *i);

int		ft_strlen(char *str);
int		ft_unsigned_len(unsigned int nb);
int		ft_intlen(int nb);
int		ft_hexa_len(unsigned long int nb);

void    ft_s_right(t_flags *prt, va_list args, size_t *count_char);
void    ft_di_right(t_flags *prt, va_list args, size_t *count_char);
void    ft_c_right(t_flags *prt, va_list args, size_t *count_char);
void    ft_x_right(t_flags *prt, va_list args, size_t *count_char);
void	ft_u_right(t_flags *prt, va_list args, size_t *count_char);
void    ft_p_right(t_flags *prt, va_list args, size_t *count_char);
void    ft_maj_x_right(t_flags *prt, va_list args, size_t *count_char);

void    ft_di_left_p(t_flags *prt, char q, va_list args, size_t *count_char);
void	ft_u_left_p(t_flags *prt, char q, va_list args, size_t *count_char);
void    ft_s_left_zero_p(t_flags *prt, va_list args, size_t *count_char);
void    ft_x_left_p(t_flags *prt, char q, va_list args, size_t *count_char);
void    ft_maj_x_left_p(t_flags *prt, char q, va_list args, size_t *count_char);

#endif