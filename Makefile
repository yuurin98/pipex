NAME = pipex

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = pipex.c utils.c libft/libft.a ft_printf/libftprintf.a

INCLUDE = pipex.h

$(NAME) :	make all -C libft
			$(CC) $(CFLAGS) $(SRCS) -o $(NAME)

all : $(NAME)

fclean :	clean
			rm -rf $(NAME)
			make fclean -C libft

clean :		
			rm -rf $(NAME)
			make clean -C libft

re : fclean all