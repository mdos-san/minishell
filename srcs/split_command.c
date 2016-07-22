#include "minishell.h"

void	split_command(t_mnsh *mnsh)
{
	mnsh->parameters = ft_strsplit(mnsh->command, ' ');
	mnsh->command = ft_strdup(mnsh->parameters[0]);
}
