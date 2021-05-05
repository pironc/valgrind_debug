##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Root makefile
##

SRC			=		src/main.c 									\
					src/utils.c 								\
					src/invalid_write.c 						\
					src/invalid_read.c 							\
					src/memory_leaks.c 							\
					src/uninitialized.c 						\

OBJ 		= 		$(SRC:.c=.o)

NAME 		=		segfault

CFLAGS 		= 		-g -w -I./include -lm

LIB 		=		-L./lib/my -lmy

all: $(NAME)

$(NAME): 		$(OBJ)
		make -C lib/my/
		gcc -o $(NAME) $(OBJ) $(CFLAGS) $(LIB)

clean:
		$(RM) src/*.o
		$(RM) src/*.gc*
		$(RM) lib/my/*.o
		$(RM) lib/my/*.gc*
		$(RM) lib/my/libC/*.o
		$(RM) lib/my/libC/*.gc*
		$(RM) lib/my/my_printf/*.o
		$(RM) lib/my/my_printf/*.gc*

fclean:		clean
		$(RM) lib/my/libmy.a
		$(RM) segfault

re: 	fclean all

.PHONY  : all clean fclean re