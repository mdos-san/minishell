#include "minishell.h"

void	mnsh_free(t_mnsh *mnsh)
{
	ft_strdel(&mnsh->command);
}
