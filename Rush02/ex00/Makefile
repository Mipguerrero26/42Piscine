SRCS	= ft_get_word.c ft_solver.c main.c ft_printer.c ft_strlen.c ft_get_size.c ft_validate.c ft_solver_extend.c

OBJS	= ${SRCS:.c=.o}

NAME	= rush-02

CC		= cc

RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re