#include "minishell.h"

static char	*go_to_equal(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '=')
		++i;
	++i;
	return (str + i);
}

static char *find_bin(char **paths, char *cmd)
{
	char	*tmp;
	char	*bin;
	int		i;
	
	i = 0;
	while (paths[i])
	{
		tmp = ft_strjoin(paths[i], "/");
		bin = ft_strjoin(tmp, cmd);
		if (access(bin, X_OK) == 0)
		{
			ft_strdel(&tmp);
			return (bin);
		}
		ft_strdel(&tmp);
		ft_strdel(&bin);
		++i;
	}
	if (access(cmd, X_OK) == 0)
		return (cmd);
	return (NULL);
}

int	bin_check(t_mnsh *mnsh)
{
	char	*bin;
	char	*path;
	char	**paths;
	pid_t	pid;
	int		status;

	status = 0;
	path = str_array_find(mnsh->env, "PATH=");
	path = go_to_equal(path);
	paths = ft_strsplit(path, ':');
	bin = find_bin(paths, mnsh->command);
	if (bin != NULL)
	{
		pid = fork();
		(pid > 0) ? wait(&status) : 0;
		if (pid == 0)
		{
			execve(bin, mnsh->parameters, mnsh->env);
			exit(0);
		}
		return (1);
	}
	return (0);
}
