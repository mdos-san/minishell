/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdos-san <mdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 10:02:17 by mdos-san          #+#    #+#             */
/*   Updated: 2016/08/05 10:02:18 by mdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int		main(int ac, char **av, char **environ)
{
	t_mnsh	mnsh;

	mnsh = mnsh_init(ac, av, environ);
	ft_putstr("\e[1;1H\e[2J");
	ft_putendl("Welcome to minishell :D !\n");
	mnsh_start(&mnsh);
	mnsh_free(&mnsh);
	return (0);
}
