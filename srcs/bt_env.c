/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bt_env.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdos-san <mdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 10:01:19 by mdos-san          #+#    #+#             */
/*   Updated: 2016/08/05 10:01:20 by mdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	bt_env(t_mnsh *mnsh)
{
	int	index;

	index = 0;
	while (mnsh->env[index])
	{
		ft_putendl(mnsh->env[index]);
		++index;
	}
}
