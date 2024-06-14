NAME = pipex

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = pipex.c utils.c libft/libft.a ft_printf/libftprintf.a

INCLUDE = pipex.h

all : $(NAME)

.c.o :		make all -C libft
			$(CC) $(CFLAGS) -c -I $(INCLUDE) $< -o $(<:.c=.o)

clean :		
			rm -rf $(NAME)
			make clean -C libft

fclean :	clean
			rm -rf $(NAME)
			make fclean -C libft

re : fclean all