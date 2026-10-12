
NAME	=	libftprintf.a

SRC	=	ft_printf.c ft_putchar.c ft_putstr.cft_putnbrhex.c ft_putnbr_Hexx.c ft_putuns.c ft_putptr.c ft_strjoin_lst.c itoal.c 

OBJS = $(SRC:.c=.o)

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf
AR = ar crs

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)		

re:	fclean all

.PHONY:	all clean fclean re