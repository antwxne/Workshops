SRC	=	hello.c

OBJ	=	$(SRC:.c=.o)

NAME	=	hello_world

RM	?=	rm -f
CC	=	gcc
CFLAGS	=	-Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)
	$(RM) unit_tests

tests_run:
	$(CC) -o unit_tests tests/tests.c --coverage -lcriterion
	./unit_tests

.PHONY:	all $(NAME) clean fclean tests_run