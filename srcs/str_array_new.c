/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_array_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdos-san <mdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 13:16:13 by mdos-san          #+#    #+#             */
/*   Updated: 2016/08/05 13:19:30 by mdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	**str_array_new(void)
{
	char	**new;

	new = (char**)malloc(sizeof(char *));
	if (new == NULL)
		return (NULL);
	new[0] = NULL;
	return (new);
}
