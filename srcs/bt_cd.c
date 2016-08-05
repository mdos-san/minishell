/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bt_cd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdos-san <mdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 10:01:03 by mdos-san          #+#    #+#             */
/*   Updated: 2016/08/05 10:01:05 by mdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	bt_cd(t_mnsh *mnsh)
{
	(chdir(mnsh->parameters[1]) == 0)
	? ft_putendl("Success")
	: ft_putendl("cd: can't open directory");
}
