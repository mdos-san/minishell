#include "minishell.h"

void	mnsh_free(t_mnsh *mnsh)
{
	ft_strdel(&mnsh->command);
	str_array_del(&mnsh->env);
	str_array_del(&mnsh->parameters);
}
