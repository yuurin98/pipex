SRCS		=	ft_printf.c ft_putchar.c ft_puthexlower.c ft_puthexupper.c\
				ft_putnbr_unsigned.c ft_putnbr.c ft_putstr.c ft_strlen.c\
				ft_printp.c
OBJ			=	$(SRCS:.c=.o)
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
LIBRARY		=	libftprintf
INCLUDE		=	ft_printf.h
LIB			=	$(LIBRARY).a
NAME		=	$(LIB)

all		:	$(NAME)

$(NAME)	:	$(OBJ)
			ar -rc $(LIB) $(OBJ)
			ranlib $(LIB)

.c.o	:
			$(CC) $(CFLAGS) -c -I $(INCLUDE) $< -o $(<:.c=.o)

clean	:
			rm -f $(OBJ)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all

.PHONY	:	all clean fclean re