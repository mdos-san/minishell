#include "minishell.h"

void	bt_env(t_mnsh *mnsh)
{
	int	index;

	index = 0;
	while (mnsh->env[index])
	{
		ft_putendl(mnsh->env[index]);
		++index;
	}
}
