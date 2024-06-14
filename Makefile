LIBFT = libft/libft.a

NAME = pipex

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = pipex.c utils.c $(LIBFT)

OBJS = $(SRCS:.c=.o)

INCLUDE = pipex.h

all : $(LIBFT) $(NAME)

$(LIBFT) :	
			make -C libft/

$(NAME) :	$(OBJS)
			ar -rc $@ $^

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