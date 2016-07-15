#include "minishell.h"

int		main(int ac, char **av, char **environ)
{
	t_mnsh	mnsh;

	mnsh = mnsh_init(ac, av, environ);
	mnsh_start(&mnsh);
	mnsh_free(&mnsh);
	return (0);
}
