/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkeklik <bkeklik@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 18:42:47 by bkeklik           #+#    #+#             */
/*   Updated: 2022/12/16 18:43:28 by bkeklik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strlen2(char **str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	return (i); 
}
