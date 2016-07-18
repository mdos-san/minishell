#include "minishell.h"

int	bin_check(t_mnsh *mnsh)
{
	char	*bin;
	pid_t	pid;
	int		status;

	status = 0;
	bin = ft_strjoin("/bin/", mnsh->command);
	pid = fork();
	(pid > 0) ? wait(&status) : 0;
	if (pid == 0)
	{
		execve(bin, mnsh->av, NULL);
		exit(0);
	}
	return (1);
}
