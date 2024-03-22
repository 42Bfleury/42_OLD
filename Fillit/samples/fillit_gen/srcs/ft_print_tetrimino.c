/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tetrimino.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/28 18:20:28 by bfleury           #+#    #+#             */
/*   Updated: 2015/12/29 05:13:53 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit_gen.h"

void	ft_print_tetrimino(t_list **list, int index)
{
	int		i;
	t_list	*tetriminos;

	i = 0;
	tetriminos = *list;
	while (i < index)
	{
		tetriminos = tetriminos->next;
		i++;
	}
	ft_putstr(tetriminos->content);
}
