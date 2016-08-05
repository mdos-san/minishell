/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mnsh_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdos-san <mdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 10:02:26 by mdos-san          #+#    #+#             */
/*   Updated: 2016/08/05 16:09:22 by mdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	mnsh_free(t_mnsh *mnsh)
{
	ft_strdel(&mnsh->command);
	str_array_del(&mnsh->env);
	str_array_del(&mnsh->parameters);
}
