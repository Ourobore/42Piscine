SRCS	= ft.c main.c

HEADS	= fts.h

OBJS	= ${SRCS:.c=.o}

NAME	= do-op

CC		= gcc

C_FLAGS	= -Wall -Wextra -Werror

RM		= rm -f

.c.o:	=
			  ${CC} ${C_FLAGS} -c $< -o ${<:.c=.o} -I./

all:	${NAME}

${NAME}:	${OBJS}
			${CC} ${C_FLAGS} ${OBJS} -o ${NAME}

clean:
			${RM} ${OBJS}

fclean: clean
			${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
