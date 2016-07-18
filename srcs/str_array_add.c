#include "minishell.h"

void	str_array_add(char ***array, char *str)
{
	char	**new;

	new = str_array_dup(*array, 1);
	str_array_del(array);
	new[str_array_count(new)] = ft_strdup(str);
	*array = new;
}
