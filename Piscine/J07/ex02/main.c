/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 20:14:58 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/07 20:53:49 by Bfleury          ###   ########.fr       */
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

	printf("ft_ultimate_range(0, 5) => %i\n", ft_ultimate_range(&table, 0, 5));
	ft_print_int_table(table, 5);
	printf("\n//////////////////////////\n\n");
	printf("ft_ultimate_range(-7, -2) => %i\n",
	ft_ultimate_range(&table, -7, -2));
	ft_print_int_table(table, 5);
	printf("\n//////////////////////////\n\n");
	printf("ft_ultimate_range(-7, 2) => %i\n",
	ft_ultimate_range(&table, -7, 2));
	ft_print_int_table(table, 9);
	return (0);
}
