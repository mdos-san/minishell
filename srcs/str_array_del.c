/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_array_del.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdos-san <mdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 10:02:50 by mdos-san          #+#    #+#             */
/*   Updated: 2016/08/05 10:02:51 by mdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	str_array_del(char ***addr)
{
	int		index;

	index = 0;
	while ((*addr)[index])
	{
		ft_strdel((*addr) + index);
		++index;
	}
	(*addr) ? free(*addr) : 0;
	*addr = NULL;
}
