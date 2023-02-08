/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkorucu <mkorucu@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:07:23 by bkeklik           #+#    #+#             */
/*   Updated: 2023/02/08 12:42:53 by mkorucu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/minishell.h"

void	builtin_echo(char **input)
{
	int	i;
	int	flag;

	i = 1;
	flag = 1;
	if (input[i] && ft_strcmp(input[i], "-n"))
		i++;
	if (i > 1)
		flag = 0;
	while (input[i])
	{
		ft_putstr_fd(input[i], 1);
		if (input[i + 1])
			write(STDOUT_FILENO, " ", 1);
		i++;
	}
	if (flag)
		write(STDOUT_FILENO, "\n", 1);
	if (!is_parent())
		exit(EXIT_SUCCESS);
}