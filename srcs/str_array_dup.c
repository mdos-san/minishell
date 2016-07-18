#include "minishell.h"

char	**str_array_dup(char **array)
{
	char	**new;
	int		index;
	int		max;

	index = 0;
	max = str_array_count(array);
	new = (char **)malloc((max + 1) * sizeof(char*));
	if (new == NULL)
		return (NULL);
	new[max] = NULL;
	while (index < max)
	{
		new[index] = ft_strdup(array[index]);
		++index;
	}
	return (new);
}
