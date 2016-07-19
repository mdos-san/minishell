#include "minishell.h"

/*
**
**	This function verify if str begin by pattern.
**
*/

int	ft_strstart(char *str, char *pattern)
{
	int	i;

	i = 0;
	if (!str || !pattern)
		return (0);
	while (pattern[i] != '\0')
	{
		if (pattern[i] != str[i])
			return (0);
		++i;
	}
	return (1);
}
