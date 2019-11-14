SRCS	= ./check_exists.c ./cpy_s.c ./main.c ./print.c ./verif_arg.c ./manipulate_number.c

HEADS	= ft.h

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

CC		= gcc

C_FLAGS	= -Wall -Wextra -Werror

RM		= rm -f

.c.o:	=
			  ${CC} ${C_FLAGS} -o ${NAME} ${SRCS} -I./

all:	${NAME}

${NAME}:	${OBJS}
			

clean:
			${RM} ${OBJS}

fclean: clean
			${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
