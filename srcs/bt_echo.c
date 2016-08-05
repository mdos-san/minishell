/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bt_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdos-san <mdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 10:01:13 by mdos-san          #+#    #+#             */
/*   Updated: 2016/08/05 10:01:14 by mdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	bt_echo(t_mnsh *mnsh)
{
	int	i;

	i = 1;
	while (mnsh->parameters[i])
	{
		(i != 1) ? ft_putchar(' ') : 0;
		ft_putstr(mnsh->parameters[i]);
		++i;
	}
	ft_putchar('\n');
}
