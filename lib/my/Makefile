##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## lib makefile
##

SRC		=		my_str_to_word_array.c   	  	 	\

OBJ 	= 		$(SRC:.c=.o)

NAME 	=		libmy.a

CFLAGS 	=		-g -I../../include

all: $(NAME)

$(NAME): 		$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)