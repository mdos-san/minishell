#include "minishell.h"

int	built_in_check(t_mnsh *mnsh)
{
	int	ret;

	ret = 5;
	(ft_strcmp(mnsh->command, "env") == 0) ? bt_env(mnsh) : --ret;
	(ft_strcmp(mnsh->command, "setenv") == 0) ? bt_setenv(mnsh) : --ret;
	(ft_strcmp(mnsh->command, "unsetenv") == 0) ? bt_unsetenv(mnsh) : --ret;
	(ft_strcmp(mnsh->command, "cd") == 0) ? bt_cd(mnsh) : --ret;
	(ft_strcmp(mnsh->command, "echo") == 0) ? bt_echo(mnsh) : --ret;
	return (ret);
}
