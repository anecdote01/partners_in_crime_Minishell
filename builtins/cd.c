/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 20:41:37 by mkorucu           #+#    #+#             */
/*   Updated: 2023/01/27 20:42:14 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/minishell.h"

void	builtin_cd(char **input)
{
	
	if (input[1] == NULL)
	{
		if (chdir(getenv("HOME")))
			perror("minishell ");
	}
	else
	{
		if(chdir(input[1]) != 0)
			perror("minishell ");
	}
	if (hack.parent_pid != getpid())
		exit(errno);
}