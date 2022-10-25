
SRC = ft_putchar.c ft_putstr.c ft_printf.c ft_hexadecimale.c ft_putnbr.c ft_unsigne_value.c

OBJS = ${SRC:.c=.o}

CC = cc

FLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

all:		${NAME}
	
${NAME}:
			${CC} ${FLAGS} -c ${SRC}
			ar -rc ${NAME} ${OBJS}

clean:
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all
