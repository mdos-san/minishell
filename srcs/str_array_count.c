/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_array_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdos-san <mdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 10:02:46 by mdos-san          #+#    #+#             */
/*   Updated: 2016/08/05 10:02:46 by mdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	str_array_count(char **array)
{
	int	index;

	index = 0;
	while (array[index])
	{
		++index;
	}
	return (index);
}
