#include "minishell.h"

int		main()
{
	t_mnsh	mnsh;

	mnsh = mnsh_init();
	mnsh_start(&mnsh);
	mnsh_free(&mnsh);
	return (0);
}
