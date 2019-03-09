##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## makefile
##

CFLAGS	=	-I../include

SRC	=	main.c				\
		tests_strlen.c		\
		tests_memset.c		\
		tests_memcpy.c		\
		tests_memmove.c		\
		tests_strcmp.c		\
		tests_strncmp.c		\
		tests_strcasecmp.c	\
		tests_rindex.c		\
		tests_strstr.c		\
		tests_strpbrk.c		\
		tests_strcspn.c		\
		tests_strchr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	units_tests

.SILENT:

$(NAME):	$(OBJ)
	make -C src/
	gcc -o $(NAME) $(OBJ) -lasm
	echo ------------------------------------------------------------
	./units_tests
	echo ------------------------------------------------------------
	echo "End of Units Tests ASM, See you later :)"

all:	$(NAME)

clean:
	rm -f $(OBJ)
		@echo Clean fait!

fclean: clean
	find ../ -name "*.gcda" -delete
	find ../ -name "*.gcno" -delete
	rm units_tests
		@echo Fclean fait!

re:	fclean all
		@echo RE fait!

.PHONY: clean fclean re all
