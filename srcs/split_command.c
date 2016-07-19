#include "minishell.h"

void	split_command(t_mnsh *mnsh)
{
	int	index;

	index = 0;
	mnsh->parameters = ft_strsplit(mnsh->command, ' ');
	while (index + 1 != '\0')
	{
		(mnsh->command[index] == ' ') ? (mnsh->command[index] = '\0') : 0;
		if (mnsh->command[index] == '\0')
			break ;
		++index;
	}
}
