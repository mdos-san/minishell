#include "minishell.h"

int	built_in_check(t_mnsh *mnsh)
{
	int	ret;

	ret = 3;
	(ft_strcmp(mnsh->command, "env") == 0) ? bt_env(mnsh) : --ret;
	(ft_strcmp(mnsh->command, "setenv") == 0) ? bt_setenv(mnsh) : --ret;
	(ft_strcmp(mnsh->command, "cd") == 0) ? bt_cd(mnsh) : --ret;
	return (ret);
}
