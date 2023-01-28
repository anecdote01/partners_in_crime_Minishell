/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:22:36 by fkaratay          #+#    #+#             */
/*   Updated: 2023/01/27 20:19:06 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

int	is_builtin(char *command)
{
	if (ft_strcmp(command, "cd"))
		return (CD);
	if (ft_strcmp(command, "env"))
		return (ENV);
	if (ft_strcmp(command, "pwd"))
		return (PWD);
	if (ft_strcmp(command, "echo"))
		return (ECHO);
	if (ft_strcmp(command, "exit"))
		return (EXIT);
	if (ft_strcmp(command, "unset"))
		return (UNSET);
	if (ft_strcmp(command, "export"))
		return (EXPORT);
	return (0);
}

void	run_builtin(char **execute)
{
	if (ft_strcmp(*execute, "pwd"))
		builtin_pwd();
	else if (ft_strcmp(*execute, "env"))
		builtin_env();
	else if (ft_strcmp(*execute, "cd"))
		builtin_cd(execute);
	else if (ft_strcmp(*execute, "echo"))
		builtin_echo(execute);
	else if (ft_strcmp(*execute, "exit"))
		builtin_exit(execute);
	else if (ft_strcmp(*execute, "unset"))
		builtin_unset(execute);
	else if (ft_strcmp(*execute, "export"))
		builtin_export(execute);
}
