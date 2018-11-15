##
## EPITECH PROJECT, 2018
## my_printf
## File description:
## MAKEFILE
##

SRC =	lib/my/my_lib_1.c 			\
	lib/my/my_lib_2.c 			\
	my_printf_opt_1.c 	\
	my_printf_opt_2.c 	\
	my_printf.c

OBJ = 	$(SRC:.c=.o)
NAME=	libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean:
	rm -f $(NAME)

re: 	fcldan all
