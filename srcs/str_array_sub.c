#include "minishell.h"

void	str_array_sub(char ***stra, char *pattern)
{
	int		i;
	int		j;
	int		line;
	char	**new;

	i = 0;
	j = 0;
	line = str_array_count(*stra);
	new = (char **)malloc(line * sizeof(char *));
	while ((*stra)[i])
	{
		if (ft_strstart(stra[i], pattern) == 0)
		{
			new[j] = ft_strdup((*stra)[i]);
			++j;
		}
		++i;
	}
	str_array_del(stra);
	*stra = new;
}
