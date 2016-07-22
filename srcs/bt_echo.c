#include "minishell.h"

void	bt_echo(t_mnsh *mnsh)
{
	int	i;

	i = 1;
	while (mnsh->parameters[i])
	{
		(i != 1) ? ft_putchar(' ') : 0;
		ft_putstr(mnsh->parameters[i]);
		++i;
	}
	ft_putchar('\n');
}
