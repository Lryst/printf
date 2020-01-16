.PHONY : all clean fclean re up

CC = gcc $(INCLUDES) $(CFLAGS)

CFLAGS = -Wall -Wextra -Werror 

NAME = libftprintf.a

HEADERS = ft_printf.h

INCLUDES = -I 

SRCS =	ft_conv.c\
		ft_flags_m.c\
		ft_flags_z.c\
		ft_full_flags.c\
		ft_len.c\
		ft_parse.c\
		ft_precision.c\
		ft_print_char.c\
		ft_print_di.c\
		ft_print_s.c\
		ft_print_c.c\
		ft_print_maj_x.c\
		ft_print_p.c\
		ft_print_u.c\
		ft_print_x.c\
		ft_printf.c\
		ft_widths.c

OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(SRCS) $(OBJS) $(HEADERS)
		@ar rc $(NAME) $(OBJS)
		@ranlib $(NAME)
		@echo "\033[032mLibftprintf : Object files Created\033[0m"
		@echo "\033[032mLibftprintf : Libftprintf.a Created\033[0m"

clean :
	@rm -f $(OBJS) $(LIST)
	@echo "\033[32mLibftprintf : Object files Removed\033[0m"

fclean : clean
	@rm -f $(NAME) $(LIST)
	@echo "\033[32mLibftprintf : Libftprintf.a Removed\033[0m"

up : all clean

re : fclean all

.SILENT: $(OBJS) 