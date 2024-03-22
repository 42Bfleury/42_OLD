/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_buffer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 13:21:45 by bfleury           #+#    #+#             */
/*   Updated: 2016/01/14 08:04:21 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		ft_check_buffer(char *buffer)
{
	int		i;
	int		nb_blocks;

	i = 0;
	nb_blocks = 0;
	while (i < 20)
	{
		if ((i + 1) % 5)
		{
			if (buffer[i] != '#' && buffer[i] != '.')
				return (0);
			else if (buffer[i] == '#')
				nb_blocks++;
		}
		else if (buffer[i] != '\n')
			return (0);
		i++;
	}
	if (nb_blocks != 4)
		return (0);
	return (1);
}
