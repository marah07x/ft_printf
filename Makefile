NAME = libftprintf.a
CC =cc
FLAGS = -Wall -Wextra -Werror
SRC = ft_ita.c ft_printf.c ft_putchar.c ft_putnbrHexx.c ft_putptr.c ft_putstr.c ft_putuns.c
OBJ = $(SRC:.c=.o)
LIBFT = libft/libft.a

all : $(NAME)
$(NAME) : $(OBJ)
	$(MAKE) -C libft
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)
%.o: %.c
	$(CC) $(FLAGS) -c  $< -o $@
clean:
	$(MAKE) -C libft clean
	rm -f $(OBJ)
fclean: clean
	$(MAKE) -C libft fclean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re