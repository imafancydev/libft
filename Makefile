NAME = libft.a
CC= cc
FLAGS = -Wall -Wextra -Werror

FILES = *.c

OBJ = $(FILES:.c=.o)
RM = rm -f

.c.o:
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o}

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re