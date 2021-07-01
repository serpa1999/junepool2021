SRCS	= ft_cat.c

OBJS	= ft_cat.o

CFLAGS	= -Wall -Wextra -Werror

CC		= gcc

NAME	= ft_cat

RM		= rm -f ${NAME}

${NAME}:	${OBJS}

all:		${CC} ${CFLAGS} -o ${NAME} ${SRCS}

clean:
			rm -f ${OBJS} 

fclean: 	clean
			rm -f ${NAME}
