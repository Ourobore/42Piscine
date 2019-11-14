D_SRCS	= ./srcs/

D_HEAD	= ./includes/

SRCS	= ${D_SRCS}ft_putchar.c ${D_SRCS}ft_strcmp.c ${D_SRCS}ft_swap.c ${D_SRCS}ft_putstr.c ${D_SRCS}ft_strlen.c

HEADS	= ft.h

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= gcc

C_FLAGS	= -Wall -Wextra -Werror

RM		= rm -f

.c.o:	=
		  ${CC} ${C_FLAGS} -c $< -o ${<:.c=.o} -I${D_HEAD}

all:	${NAME}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS}

clean:	
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
