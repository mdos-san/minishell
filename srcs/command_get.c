#include "minishell.h"

static void	prompt_draw()
{
	ft_putstr("$> ");
}

char		*command_get()
{
	char	buf[1024];
	int		size;
	
	prompt_draw();
	ft_bzero(buf, 1024);
	((size = read(0, buf, 1024)) == -1) ? exit(0) : 0;;
	(buf[size - 1] == '\n') ?  (buf[size - 1] = '\0') : 0;
	ft_putendl(buf);
	return (ft_strdup(buf));
}
