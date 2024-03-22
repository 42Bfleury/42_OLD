/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tetriminos.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 19:01:11 by bfleury           #+#    #+#             */
/*   Updated: 2015/12/29 05:14:06 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit_gen.h"

void	ft_print_tetriminos(t_list *list, int *index, size_t size)
{
	size_t	i;

	i = 0;
	list = list;
	while (i < size)
	{
		if (i > 0)
			ft_putchar('\n');
		ft_print_tetrimino(&list, index[i]);
		i++;
	}
}
