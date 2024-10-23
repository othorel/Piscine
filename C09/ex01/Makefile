NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

INCDIR = includes

CC = gcc

FLAGS = -Wall -Werror -Wextra

OBJS = ${SRCS:.c=.o}

%.o: %.c
	${CC} ${FLAGS} -c $< -o$@ -I ${INCDIR}

${NAME}:	${OBJS}
				ar -rsc ${NAME} ${OBJS}

all: 	${NAME}

clean:
	rm -f ${OBJS}

fclean:
	rm -f ${NAME}

re:		fclean all

.PHONY: all clean fclean re
