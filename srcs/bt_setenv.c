#include "minishell.h"

void	bt_setenv(t_mnsh *mnsh)
{
	str_array_add(&mnsh->env, mnsh->parameters[1]);
}
