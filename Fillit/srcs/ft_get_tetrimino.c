/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_tetrimino.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/05 05:03:40 by bfleury           #+#    #+#             */
/*   Updated: 2016/06/09 06:58:41 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

unsigned short		ft_get_tetrimino(int fd)
{
	int				length;
	char			buffer[20];
	unsigned short	tetrimino;

	length = read(fd, buffer, 20);
	if (length == 20)
		if (ft_check_buffer(buffer))
			if (ft_check_tetrimino(tetrimino = ft_string2bin(buffer)))
				return (tetrimino);
	return (0);
}
