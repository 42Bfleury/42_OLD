/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string2bin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 13:24:24 by bfleury           #+#    #+#             */
/*   Updated: 2016/01/14 07:54:56 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

unsigned short		ft_string2bin(char *buffer)
{
	int				i;
	unsigned short	result;

	i = 0;
	result = 0;
	while (i < 20)
	{
		if (buffer[i] == '#' || buffer[i] == '.')
			result = result << 1;
		if (buffer[i] == '#')
			result = result | 1;
		i++;
	}
	while (!(result & 0xF000))
		result = result << 4;
	while (!(result & 0x8888))
		result = result << 1;
	return (result);
}
