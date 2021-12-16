NAME	= libftprintf.a

SRCS	= ft_strlen.c ft_putstr.c ft_putnbr.c ft_puthexa.c ft_putchar.c ft_puthexaU.c ft_printf.c ft_printptr.c ft_printunbr.c

OBJS	= $(SRCS:.c=.o)

CC		= cc

FLGS	= -Wall -Wextra -Werror

LIB1	= ar -rcs

RM		= rm -f


all:		$(NAME)

$(NAME):	$(OBJS)
			$(LIB1) $(NAME) $(OBJS)
			@echo "\033[0;92m* $(NAME) rah t9adat *\033[0m"

.c.o:
			$(CC) $(FLGS) -c $< -o ${<:.c=.o}

clean:
			$(RM) $(OBJS)
			@echo "\033[0;91m* $(NAME) w objects rah tmasho *\033[0m"

fclean:		clean
			$(RM) $(NAME)
			@echo "\033[0;91m* $(NAME) tmashat *\033[0m"

re:			fclean all

.PHONY:		all clean fclean re