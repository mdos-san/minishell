#ifndef MINISHELL_H
# define MINISHELL_H

# include <unistd.h>
# include <stdlib.h>

# include "libft.h"

typedef struct	s_mnsh
{
	char		*command;
}				t_mnsh;

t_mnsh			mnsh_init();
void			mnsh_start(t_mnsh *mnsh);
void			mnsh_free(t_mnsh *mnsh);
char			*command_get();

#endif
