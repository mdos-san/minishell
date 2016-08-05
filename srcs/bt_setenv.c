/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bt_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdos-san <mdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 10:01:29 by mdos-san          #+#    #+#             */
/*   Updated: 2016/08/05 12:07:43 by mdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	bt_setenv(t_mnsh *mnsh)
{
	char	*left;
	char	*right;

	if (str_array_count(mnsh->parameters) == 3)
	{
		left = ft_strjoin(mnsh->parameters[1], "=");
		right = ft_strjoin(left, mnsh->parameters[2]);
		str_array_add(&mnsh->env, right);
		ft_strdel(&left);
		ft_strdel(&right);
	}
}
