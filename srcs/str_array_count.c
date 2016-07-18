#include "minishell.h"

int	str_array_count(char **array)
{
	int	index;

	index = 0;
	while (array[index])
	{
		++index;
	}
	return (index);
}
