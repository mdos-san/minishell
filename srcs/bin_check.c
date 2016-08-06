/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdos-san <mdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 10:00:58 by mdos-san          #+#    #+#             */
/*   Updated: 2016/08/06 12:08:11 by mdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

static char	*find_bin(char **paths, char *cmd)
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

static int	store_pid(int new_pid)
{
	static int	pid;

	(new_pid > 0) ? (pid = new_pid) : 0;
	return (pid);
}

static void	handler(int sig)
{
	kill(store_pid(0), SIGINT);
	(void)sig;
}

int			bin_check(t_mnsh *mnsh)
{
	char	*bin;
	char	*path;
	char	**paths;
	pid_t	pid;
	int		status;

	path = str_array_find(mnsh->env, "PATH=");
	path = go_to_equal(path);
	paths = ft_strsplit(path, ':');
	bin = find_bin(paths, mnsh->command);
	if (bin != NULL)
	{
		pid = fork();
		if (pid > 0 && store_pid(pid) > 0 && signal(SIGINT, handler) != SIG_ERR)
			wait(&status);
		if (pid == 0)
		{
			execve(bin, mnsh->parameters, mnsh->env);
			exit(0);
		}
		str_array_del(&paths);
		ft_strdel(&bin);
		return (1);
	}
	return (0);
}
