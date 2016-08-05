/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bt_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdos-san <mdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 10:01:19 by mdos-san          #+#    #+#             */
/*   Updated: 2016/08/05 14:20:54 by mdos-san         ###   ########.fr       */
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

int			env_check(t_mnsh *mnsh)
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
	bin = find_bin(paths, mnsh->parameters[2]);
	if (bin != NULL)
	{
		pid = fork();
		(pid > 0) ? wait(&status) : 0;
		if (pid == 0)
		{
			execve(bin, mnsh->parameters + 2, NULL);
			exit(0);
		}
		return (1);
	}
	return (0);
}

void		bt_env(t_mnsh *mnsh)
{
	int	index;

	index = 0;
	if (ft_strcmp(mnsh->parameters[1], "-i") == 0)
		env_check(mnsh);
	else if (mnsh->env != NULL)
		while (mnsh->env[index])
		{
			ft_putendl(mnsh->env[index]);
			++index;
		}
}
