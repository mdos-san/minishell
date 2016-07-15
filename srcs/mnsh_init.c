#include "minishell.h"

t_mnsh	mnsh_init()
{
	t_mnsh	new;

	new.command = NULL;
	return (new);
}
