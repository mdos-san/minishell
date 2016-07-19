#include "minishell.h"

void	bt_cd(t_mnsh *mnsh)
{
	(chdir(mnsh->parameters[1]) == 0)
	? ft_putendl("Success")
	: ft_putendl("cd: can't open directory");
}
