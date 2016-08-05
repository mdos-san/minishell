/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mnsh_parse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdos-san <mdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 13:07:13 by mdos-san          #+#    #+#             */
/*   Updated: 2016/08/05 14:20:41 by mdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

static int	is_space(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

static int	go_next_quote(char *str, int *i)
{
	while (str[*i])
	{
		if (str[*i] == '"')
			return (1);
		*i += 1;
	}
	return (0);
}

static int	go_next_space(char *str, int *i)
{
	while (str[*i])
	{
		if (is_space(str[*i]))
			return (1);
		*i += 1;
	}
	return (0);
}

static void	allocate(char ***tab, char *str, int *i, int i2)
{
	char	tmp;

	tmp = str[i2];
	str[i2] = '\0';
	str_array_add(tab, str + *i);
	str[i2] = tmp;
	*i = i2;
}

char	**mnsh_parse(char *str)
{
	char	**tab;
	int		i;
	int		i2;

	i = -1;
	i2 = 0;
	tab = str_array_new();
	while (str[++i])
	{
		i2 = i;
		if (str[i] == '"')
		{
			++i2;
			++i;
			go_next_quote(str, &i2);
			allocate(&tab, str, &i, i2);
		}
		else if ((i - 1 == -1 && !is_space(str[i]))
			|| (i > 0 && (is_space(str[i - 1]) && !is_space(str[i]))))
		{
			go_next_space(str, &i2);
			allocate(&tab, str, &i, i2);
		}
	}
	return (tab);
}
