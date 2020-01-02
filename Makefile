.PHONY : all clean fclean re up

CC = gcc $(INCLUDES) $(CFLAGS)

CFLAGS = -Wall -Wextra -Werror 

NAME = libftprintf.a

HEADERS = ft_printf.h

INCLUDES = -I 

SRCS =	ft_flags_c.c\
		ft_flags_di.c\
		ft_flags_maj_x.c\
		ft_flags_min.c\
		ft_flags_minus.c\
		ft_flags_p.c\
		ft_flags_point.c\
		ft_flags_s.c\
		ft_flags_stars.c\
		ft_flags_u.c\
		ft_flags_x.c\
		ft_flags_zero.c\
		ft_len.c\
		ft_parse.c\
		ft_print_char.c\
		ft_print_int.c\
		ft_printf.c


OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(SRCS) $(OBJS) $(HEADERS)
		@ar rc $(NAME) $(OBJS)
		@ranlib $(NAME)
		@echo "\033[032mLibft : Object files Created\033[0m"
		@echo "\033[032mLibft : Libftprintf.a Created\033[0m"

clean :
	@rm -f $(OBJS) $(LIST)
	@echo "\033[32mLibft : Object files Removed\033[0m"

fclean : clean
	@rm -f $(NAME) $(LIST)
	@echo "\033[32mLibft : Libftprintf.a Removed\033[0m"

up : all clean

re : fclean all

.SILENT: $(OBJS)