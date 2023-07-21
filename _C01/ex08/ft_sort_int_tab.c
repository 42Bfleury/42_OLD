/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 23:55:15 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/09 00:47:53 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <stdio.h>
void	ft_print_int_tab(int *tab, int size)
{
	int	i = 0;
	while (i < size)
	{
		if (i)
			printf(", ");
		printf("%i", tab[i]);
		i++;
	}
}

int	main(void)
{
	int	tab[] = {9, 1, 7, 3, 6, 4, 8, 5, 2, 0};
	ft_print_int_tab(tab, 10);
	printf("\n");
	ft_sort_int_tab(tab, 10);
	ft_print_int_tab(tab, 10);
	printf("\n");
	return (0);
}*/
