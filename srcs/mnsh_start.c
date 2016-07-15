#include "minishell.h"

void	mnsh_start(t_mnsh *mnsh)
{
	while (mnsh->command == NULL || ft_strcmp("exit\n", mnsh->command) != 0)
	{
		ft_strdel(&mnsh->command);
		mnsh->command = command_get();
		built_in_check(mnsh);
	}
}
