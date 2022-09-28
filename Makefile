NAME = libftprintf.a

SRCS =	ft_print.c \
		ft_printf.c\
		ft_printptr.c\
		ft_printui.c\
		ft_printx.c

OBJS = $(SRCS:%.c=%.o)

CFLAGS = -Wall -Werror -Wextra

CC = gcc

all : $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


$(NAME): $(OBJS)
	make -C libft
	cp libft/libft.a libftprintf.a
	ar rc $(NAME) $(OBJS)

clean :
	make clean -C libft
	rm -rf $(OBJS)

fclean : clean
	make fclean -C libft
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
