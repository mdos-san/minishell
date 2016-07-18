#ifndef MINISHELL_H
# define MINISHELL_H

# include <unistd.h>
# include <stdlib.h>

# include "libft.h"

typedef struct	s_mnsh
{
	int			ac;
	char		**av;
	char		**env;
	char		*command;
}				t_mnsh;

t_mnsh			mnsh_init(int ac, char **av, char **env);
void			mnsh_start(t_mnsh *mnsh);
void			mnsh_free(t_mnsh *mnsh);
char			*command_get();
int				built_in_check(t_mnsh *mnsh);
void			bt_env(t_mnsh *mnsh);
int				str_array_count(char **array);
char			**str_array_dup(char **array);
void			str_array_del(char ***addr);

#endif
