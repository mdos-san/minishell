NAME=		minishell

TMP_C=		main.c\
			mnsh_init.c\
			mnsh_start.c\
			command_get.c

SRC_C=		$(TMP_C:%=srcs/%)
SRC_O=		$(TMP_C:.c=.o)

FLAG=		-Werror -Wextra -Wall

all: libft.a includes/libft.h $(SRC_O) $(NAME)



libft.a:
	make -C libft
	mv libft/libft.a .
	make fclean -C libft

includes/libft.h:
	cp libft/includes/libft.h includes

$(NAME):
	gcc -o $(NAME) $(SRC_O) -L. libft.a $(FLAG)

%.o:	srcs/%.c
	gcc -c -I./includes $< $(FLAG)
clean:
	rm -rf $(SRC_O)

fclean:		clean
	rm -rf $(NAME) libft.a

re:		fclean all
