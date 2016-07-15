#include "minishell.h"

void	mnsh_start(t_mnsh *mnsh)
{
	while (mnsh->command == NULL || ft_strcmp("exit\n", mnsh->command) != 0)
	{
		mnsh_free(mnsh);
		mnsh->command = command_get();
	}
}
