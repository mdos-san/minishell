#include "minishell.h"

void	mnsh_start(t_mnsh *mnsh)
{
	int	ret;

	ret = 0;
	while (mnsh->command == NULL || ft_strcmp("exit", mnsh->command) != 0)
	{
		ft_strdel(&mnsh->command);
		mnsh->command = command_get();
		split_command(mnsh);
		(built_in_check(mnsh) == 0)
		? (ret = bin_check(mnsh)) : 0;
		if (ret == 0)
		{
			ft_putstr(mnsh->command);
			ft_putendl(": command not found");
		}
	}
}
