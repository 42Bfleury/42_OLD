/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 20:14:58 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/07 20:36:58 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_print_int_table(int *table, int size)
{
	int		i;

	i = 0;
	while (i++ < size)
		printf("table[%i] => %i\n", (i - 1), table[i - 1]);
}

int		main(void)
{
	int		*table;

	table = ft_range(0, 5);
	ft_print_int_table(table, 5);
	printf("\n//////////////////////////\n\n");
	table = ft_range(-7, -2);
	ft_print_int_table(table, 5);
	printf("\n//////////////////////////\n\n");
	table = ft_range(-7, 2);
	ft_print_int_table(table, 9);
	return (0);
}
