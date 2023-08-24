NAME = libft.a

SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

SRC_DIR = ./srcs/

H_DIR = ./includes/

SRCS = ${addprefix $(SRC_DIR), $(SRC)}

CC = gcc

FLAGS = -Wall -Wextra -Werror

OBJS = ${SRCS:.c=.o}

all: ${NAME}

.c.o:
			${CC} ${FLAGS} -I ${H_DIR} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
			ar rc ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean: clean
			rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
