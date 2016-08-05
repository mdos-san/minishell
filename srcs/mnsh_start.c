/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mnsh_start.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdos-san <mdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 10:02:34 by mdos-san          #+#    #+#             */
/*   Updated: 2016/08/05 16:30:38 by mdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	mnsh_start(t_mnsh *mnsh)
{
	int	ret;

	ret = 1;
	while (mnsh->command == NULL || ft_strcmp("exit", mnsh->command) != 0)
	{
		ft_strdel(&mnsh->command);
		mnsh->command = command_get();
		split_command(mnsh);
		(built_in_check(mnsh) == 0)
		? (ret = bin_check(mnsh)) : 0;
		if (ret == 0 && ft_strcmp(mnsh->command, "exit") != 0)
		{
			ft_putstr(mnsh->command);
			ft_putendl(": command not found");
		}
	}
	ft_strdel(&mnsh->command);
}
