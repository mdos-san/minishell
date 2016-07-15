#include "minishell.h"

static void	prompt_draw()
{
	ft_putstr("$> ");
}

char		*command_get()
{
	char	buf[1024];
	
	prompt_draw();
	ft_bzero(buf, 1024);
	(read(0, buf, 1024) == -1) ? exit(0) : 0;;
	ft_putstr(buf);
	return (ft_strdup(buf));
}
