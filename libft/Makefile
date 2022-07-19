
SRC = $(wildcard *.c)

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Werror -Wextra

OBJ := $(SRC:%.c=%.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ) 

fclean:	clean
	rm -rf $(NAME)

re:	fclean all