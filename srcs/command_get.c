/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_get.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdos-san <mdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 10:01:58 by mdos-san          #+#    #+#             */
/*   Updated: 2016/08/05 10:06:27 by mdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static void	prompt_draw(void)
{
	ft_putstr("$> ");
}

char		*command_get(void)
{
	char	buf[1024];
	int		size;

	prompt_draw();
	ft_bzero(buf, 1024);
	((size = read(0, buf, 1024)) == -1) ? exit(0) : 0;
	(buf[size - 1] == '\n') ? (buf[size - 1] = '\0') : 0;
	return (ft_strdup(buf));
}
