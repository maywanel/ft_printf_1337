NAME	= libftprintf.a
SRCS	= print_p.c print_hex.c print_u.c utils.c ft_printf.c
OBJS	= ${SRCS:.c=.o}
FLAGS	= -Wall -Wextra -Werror

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I .
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
