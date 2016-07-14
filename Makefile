NAME=		minishell

TMP_C=		main.c

SRC_C=		$(TMP_C:%=srcs/%)
SRC_O=		$(TMP_C:.c=.o)

FLAG=		-Werror -Wextra -Wall

all: libft.a includes/libft.h $(NAME)

libft.a:
	make -C libft
	mv libft/libft.a .
	make fclean -C libft

includes/libft.h:
	cp libft/includes/libft.h includes

$(NAME):
	gcc -c $(SRC_C) -I./includes $(FLAG)
	gcc -o $(NAME) $(SRC_O) -L. libft.a $(FLAG)

clean:
	rm -rf $(SRC_O)

fclean:		clean
	rm -rf $(NAME) libft.a

re:		fclean all
