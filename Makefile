

SRC = ft_printf.c putstr.c print_char.c ft_putnbr_base.c hex_putnbr.c

OBJ = ${SRC:.c=.o}

LIBC = ar rcs

CC = cc

NAME = libftprintf.a

RM = rm -f

GFLAGS = -Wall -Wextra -Werror

all : ${NAME}

%.o: %.c ft_printf.h
	${CC} ${GFLAGS} -c $< -o $@ 

${NAME} : ${OBJ}
	${LIBC} ${NAME} ${OBJ}

clean : 
	${RM} ${OBJ}  

fclean : clean
	${RM} ${NAME}

re : fclean all

.PHONY: clean fclean all