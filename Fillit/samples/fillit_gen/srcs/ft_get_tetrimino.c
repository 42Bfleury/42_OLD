/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_tetriminos.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 00:55:28 by bfleury           #+#    #+#             */
/*   Updated: 2015/12/29 05:13:23 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit_gen.h"

t_list		*ft_get_tetrimino(int fd)
{
	char	buffer[21];

	if (read(fd, buffer, 21) == 21)
		return (ft_lstnew(buffer, 20));
	return (NULL);
}
