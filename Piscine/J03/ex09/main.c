/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/01 01:08:21 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/01 01:21:18 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(void)
{
	int		i;
	int		tab[10];

	i = 0;
	tab[0] = 9;
	tab[1] = 0;
	tab[2] = 8;
	tab[3] = 1;
	tab[4] = 7;
	tab[5] = 2;
	tab[6] = 6;
	tab[7] = 3;
	tab[8] = 5;
	tab[9] = 4;
	while (i++ < 10)
		printf(((i < 10) ? "%i, " : "%i\n"), tab[i - 1]);
	ft_sort_integer_table(tab, 10);
	i = 0;
	printf("\nft_sort_integer_table(tab)\n\n");
	while (i++ < 10)
		printf(((i < 10) ? "%i, " : "%i\n"), tab[i - 1]);
	return (0);
}
