
SRC_DIR	= ./srcs/

INC_DIR	= ./includes

SRCS	= ${SRC_DIR}ft_putstr.c ${SRC_DIR}ft_putchar.c ${SRC_DIR}ft_strcmp.c ${SRC_DIR}ft_strlen.c ${SRC_DIR}ft_swap.c ${INC_DIR}ft.h

OBJS	= ${SRC_DIR}ft_putstr.o ${SRC_DIR}ft_putchar.o ${SRC_DIR}ft_strcmp.o ${SRC_DIR}ft_strlen.o ${SRC_DIR}ft_swap.o

HEADER	= -I ./includes/ft.h

CFLAGS	= -Wall -Wextra -Werror ${HEADER}

NAME	= libft.a

RM		= rm -f

.c.o:
			gcc ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc libft.a ${OBJS}

all:
			${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
