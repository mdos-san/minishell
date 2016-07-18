#include "minishell.h"

void	str_array_del(char ***addr)
{
	int		index;

	index = 0;
	while ((*addr)[index])
	{
		ft_strdel((*addr) + index);
		++index;
	}
	(*addr) ? free(*addr) : 0;
	*addr = NULL;
}
