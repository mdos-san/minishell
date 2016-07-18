#include "minishell.h"

void	mnsh_start(t_mnsh *mnsh)
{
	while (mnsh->command == NULL || ft_strcmp("exit", mnsh->command) != 0)
	{
		ft_strdel(&mnsh->command);
		mnsh->command = command_get();
		split_command(mnsh);
		built_in_check(mnsh);
	}
}
