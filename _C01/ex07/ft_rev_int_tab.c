/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:12:43 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/20 20:09:41 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int tmp;

	i = 0;
	while (i < (size / 2))
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}
/*
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	ft_putchar('[');
	while (i < size)
	{
		if (i)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		ft_putchar(tab[i] + '0');
		i++;
	}
	ft_putchar(']');
}

int	main(void)
{
	int tab[] = {8,5,7,3,4,9};
	ft_print_int_tab(tab, 6);
	ft_putchar('\n');
	ft_rev_int_tab(tab, 6);
	ft_print_int_tab(tab, 6);
	return (0);
}*/
