##
## EPITECH PROJECT, 2017
## MiniLib C
## File description:
## Makefile
##

NAME		= 	../libasm.so

SRC_DIR		= 	./

SRC_FILES 	= 	strlen.asm		\
				strchr.asm		\
				memset.asm		\
				memmove.asm		\
				strcmp.asm		\
				strcasecmp.asm	\
				strncmp.asm		\
				rindex.asm		\
				strpbrk.asm		\
				strstr.asm		\
				strcspn.asm		\
				memcpy.asm

.SILENT:

SRCS		= 	$(addprefix $(SRC_DIR), $(SRC_FILES))

OBJ			= 	$(SRCS:.asm=.o)

ASM			= nasm

ASM_FLAGS	= -f elf64

# .SILENT:

%.o: %.asm
		$(ASM) -o $@ $< $(ASM_FLAGS)

all: $(NAME)

$(NAME): $(OBJ)
	ld -shared -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: clean fclean re al
