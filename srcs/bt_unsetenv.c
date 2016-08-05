/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bt_unsetenv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdos-san <mdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 10:01:38 by mdos-san          #+#    #+#             */
/*   Updated: 2016/08/05 10:04:55 by mdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	bt_unsetenv(t_mnsh *mnsh)
{
	(mnsh->parameters[1])
		? str_array_sub(&mnsh->env, mnsh->parameters[1]) : 0;
}
