CC = cc
CFLAGS = -Wall -Wextra -Werror -Iinclude

LIBFT_DIR = ./libft
LIBFT = $(LIBFT_DIR)/libft.a

SRCS = pipex.c utils.c
OBJS = $(SRCS:.c=.o)

NAME = pipex

INCLUDE = pipex.h

all : $(NAME)

$(NAME) :	$(OBJS) $(LIBFT)
			$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT) :	
			make -C $(LIBFT_DIR)

clean :		
			rm -rf $(OBJS)
			make clean -C $(LIBFT_DIR)

fclean :	clean
			rm -rf $(NAME)
			make fclean -C $(LIBFT_DIR)

re : fclean all

.PHONY : all clean fclean re