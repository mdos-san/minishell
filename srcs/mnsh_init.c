/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mnsh_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdos-san <mdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 10:02:30 by mdos-san          #+#    #+#             */
/*   Updated: 2016/08/05 10:02:31 by mdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_mnsh	mnsh_init(int ac, char **av, char **env)
{
	t_mnsh	new;

	new.command = NULL;
	new.ac = ac;
	new.av = av;
	new.env = str_array_dup(env, 0);
	return (new);
}
