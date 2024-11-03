CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rs
RM = rm -f
SRCS = print_p print_hex print_u utils ft_printf
OBJ = $(SRCS:=.o)
NAME = libftprintf.a
INC = ft_printf.h

all: $(NAME)

$(NAME): $(INC) $(OBJ)
	$(AR) $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
