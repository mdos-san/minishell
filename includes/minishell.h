/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdos-san <mdos-san@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/05 10:07:33 by mdos-san          #+#    #+#             */
/*   Updated: 2016/08/05 13:47:03 by mdos-san         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/wait.h>

# include "libft.h"

typedef struct	s_mnsh
{
	int			ac;
	char		**av;
	char		**env;
	char		*command;
	char		**parameters;
}				t_mnsh;

t_mnsh			mnsh_init(int ac, char **av, char **env);
void			mnsh_start(t_mnsh *mnsh);
void			mnsh_free(t_mnsh *mnsh);
char			**mnsh_parse(char *str);
char			*command_get();
int				built_in_check(t_mnsh *mnsh);
int				bin_check(t_mnsh *mnsh);
void			bt_env(t_mnsh *mnsh);
void			bt_setenv(t_mnsh *mnsh);
void			bt_cd(t_mnsh *mnsh);
void			bt_echo(t_mnsh *mnsh);
void			bt_unsetenv(t_mnsh *mnsh);
char			**str_array_new(void);
int				str_array_count(char **array);
char			**str_array_dup(char **array, int extra_row);
void			str_array_del(char ***addr);
void			str_array_add(char ***array, char *str);
void			str_array_sub(char ***array, char *str);
void			split_command(t_mnsh *mnsh);
int				ft_strstart(char *str, char *pattern);
char			*str_array_find(char **arr, char *pattern);

#endif
