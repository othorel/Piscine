CC = gcc

FLAGS = -Wall -Werror -Wextra

SRCS = ft_do_op.c ft_do_op2.c

OBJS = $(SRCS:.c=.o)

NAME = do-op

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $@ $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
