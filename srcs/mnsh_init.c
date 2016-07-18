#include "minishell.h"

t_mnsh	mnsh_init(int ac, char **av, char **env)
{
	t_mnsh	new;

	new.command = NULL;
	new.ac = ac;
	new.av = av;
	new.env = str_array_dup(env);
	return (new);
}
