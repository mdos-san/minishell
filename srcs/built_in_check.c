#include "minishell.h"

int	built_in_check(t_mnsh *mnsh)
{
	int	ret;

	ret = 2;
	(ft_strcmp(mnsh->command, "env\n") == 0) ? bt_env(mnsh) : --ret;
	return (ret);
}
