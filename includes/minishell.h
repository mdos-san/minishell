#ifndef MINISHELL_H
# define MINISHELL_H

# include <unistd.h>

# include "libft.h"

typedef struct	s_mnsh
{
	pid_t		father;
}				t_mnsh;

t_mnsh			mnsh_init();
void			mnsh_start(t_mnsh *mnsh);
void			command_get();

#endif
