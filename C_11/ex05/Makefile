NAME = do-op

SRC = ft_tools.c ft_tools2.c main.c

SRC_DIR = ./srcs/

SRCS = ${addprefix ${SRC_DIR}, ${SRC}}

OBJS = ${SRCS:.c=.o}

HEADER = ./includes/

FLAGS = -Wall -Wextra -Werror

CC = cc

all:	${NAME}

.c.o:
	${CC} ${FLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${CC} ${FLAGS} -o ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
