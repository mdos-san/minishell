#include "minishell.h"

/*
**
**	this function return a char * of a char **
**	that start with the pattern given
**
**
*/

char	*str_array_find(char **arr, char *pattern)
{
	int	index;

	index = 0;
	while (arr[index])
	{
		if (ft_strstart(arr[index], pattern))
			return (arr[index]);
		++index;
	}
	return (NULL);
}
