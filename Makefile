NAME=		minishell

TMP_C=		main.c\
			mnsh_init.c\
			mnsh_start.c\
			mnsh_free.c\
			mnsh_parse.c\
			command_get.c\
			built_in_check.c\
			bin_check.c\
			bt_env.c\
			bt_setenv.c\
			bt_cd.c\
			bt_echo.c\
			bt_unsetenv.c\
			str_array_new.c\
			str_array_count.c\
			str_array_dup.c\
			str_array_del.c\
			str_array_add.c\
			str_array_sub.c\
			str_array_find.c\
			split_command.c\
			ft_strstart.c

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
	gcc -o $(NAME) $(SRC_O) -I./includes -L. libft.a $(FLAG)

%.o:	srcs/%.c
	gcc -c -I./includes $< $(FLAG)
clean:
	rm -rf $(SRC_O)

fclean:		clean
	rm -rf $(NAME) libft.a

re:		fclean all
