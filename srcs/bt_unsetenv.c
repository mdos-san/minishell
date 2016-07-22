#include "minishell.h"

void	bt_unsetenv(t_mnsh *mnsh)
{
	(mnsh->parameters[1])
	 ? str_array_sub(&mnsh->env, mnsh->parameters[1]) :0;
}
