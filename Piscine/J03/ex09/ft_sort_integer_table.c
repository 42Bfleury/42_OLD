/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 03:48:29 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/01 01:17:47 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	while ((j = 0) || i++ < size - 1)
	{
		while (j++ < size - 1)
			if (tab[j - 1] > tab[j])
			{
				tmp = tab[j];
				tab[j] = tab[j - 1];
				tab[j - 1] = tmp;
			}
	}
}
