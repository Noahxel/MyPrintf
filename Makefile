##
## EPITECH PROJECT, 2021
## my_printf
## File description:
## Makefile
##

SRC	=	sources/my_printf.c	\
		sources/my_functions.c	\
		sources/my_functions2.c	\
		sources/my_converts.c

SRCT	=	tests/my_tests.c	\
			tests/my_tests2.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

NAMET	=	unit_tests

CFLAGS	=	-Wall -Wextra
TFLAGS	=	--coverage -lcriterion

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

all: $(NAME)

clean:
	rm -f $(OBJ)
	rm -f $(OBJT)

fclean:	clean
	rm -f $(NAME)
	rm -f $(NAMET)
	rm -f *.gcno
	rm -f *.gcda

re:	fclean $(NAME)

$(NAMET): fclean $(NAME)
	gcc -o $(NAMET) $(SRC) $(SRCT) $(TFLAGS) $(CFLAGS)

run_tests:	unit_tests
	./unit_tests
