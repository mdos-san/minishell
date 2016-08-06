/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_command.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdos-san <mdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 10:02:38 by mdos-san          #+#    #+#             */
/*   Updated: 2016/08/06 10:40:50 by mdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	split_command(t_mnsh *mnsh)
{
	mnsh->parameters = mnsh_parse(mnsh->command);
	ft_strdel(&mnsh->command);
	mnsh->command = ft_strdup(mnsh->parameters[0]);
}
