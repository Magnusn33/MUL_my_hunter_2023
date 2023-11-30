##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## Our glorious makefile
##

SRC		=		printf/my_putchar.c\
				printf/my_strlen.c\
				printf/my_putstr.c\
				printf/my_put_nbr.c\
				printf/my_printf.c\
				printf/my_str_to_int.c\
				render_animal.c\
				clean_up.c\
				handle_clicks.c\
				handle_exit.c\
				render_window.c\
				print_info.c\

OBJ     =       $(SRC:.c=.o)

NAME    =       my_hunter

all:            $(NAME)

$(NAME):        $(OBJ)
		ar rc libmy.a $(OBJ)
		gcc -w main.c -L./ -lmy -o $(NAME) -lcsfml-graphics -lcsfml-window -lcsfml-system

clean:
	rm -f $(OBJ)

fclean:		clean
	rm -f $(NAME)
	rm -f libmy.a

re:	fclean all
