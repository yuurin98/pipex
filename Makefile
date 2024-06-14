NAME = pipex

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = pipex.c utils.c libft/libft.a ft_printf/libftprintf.a

OBJS = $(SRCS:.c=.o)

INCLUDE = pipex.h

all : $(NAME)

$(NAME) :	$(OBJS)
			ar -rc $@ $^
			ranlib 

.c.o :
			$(CC) $(CFLAGS) -c -I $(INCLUDE) $< -o $(<:.c=.o)

clean :		
			rm -rf $(OBJ)
			make clean -C libft

fclean :	clean
			rm -rf $(NAME)
			make fclean -C libft

re : fclean all

.PHONY : all clean fclean re