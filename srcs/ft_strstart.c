/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstart.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdos-san <mdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 10:02:06 by mdos-san          #+#    #+#             */
/*   Updated: 2016/08/05 10:05:13 by mdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_strstart(char *str, char *pattern)
{
	int	i;

	i = 0;
	if (!str || !pattern)
		return (0);
	while (pattern[i] != '\0')
	{
		if (pattern[i] != str[i])
			return (0);
		++i;
	}
	return (1);
}
