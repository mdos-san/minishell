#include "minishell.h"

int		main()
{
	t_mnsh	mnsh;

	mnsh = mnsh_init();
	mnsh_start(&mnsh);
	return (0);
}
