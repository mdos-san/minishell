#include "minishell.h"

char	**str_array_dup(char **array, int extra_row)
{
	char	**new;
	int		index;
	int		max;

	index = 0;
	max = str_array_count(array);
	new = (char **)malloc((max + 1 + extra_row) * sizeof(char*));
	if (new == NULL)
		return (NULL);
	while (index < max)
	{
		new[index] = ft_strdup(array[index]);
		++index;
	}
	while (index <= max + extra_row)
	{
		new[index] = NULL;
		++index;
	}
	return (new);
}
