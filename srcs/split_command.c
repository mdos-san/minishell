/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_command.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdos-san <mdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 10:02:38 by mdos-san          #+#    #+#             */
/*   Updated: 2016/08/05 10:02:39 by mdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	split_command(t_mnsh *mnsh)
{
	mnsh->parameters = ft_strsplit(mnsh->command, ' ');
	mnsh->command = ft_strdup(mnsh->parameters[0]);
}
