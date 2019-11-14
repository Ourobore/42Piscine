SRCS	= main.c convert.c ft_needed.c get_square.c resolve.c errors.c

HEADS	= ft.h

OBJS	= ${SRCS:.c=.o}

NAME	= BSQ

CC		= gcc

C_FLAGS	= -Wall -Wextra -Werror

RM		= rm -f

.c.o:	=
			  ${CC} ${C_FLAGS} ${SRCS} -o ${NAME} -I./

all:	${NAME}

${NAME}:	${OBJS}
			

clean:
			${RM} ${OBJS}

fclean: clean
			${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
