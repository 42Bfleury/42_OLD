/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 21:21:39 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/07 03:01:20 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_result(int i, int j)
{
	ft_putchar('0' + (i / 10));
	ft_putchar('0' + (i % 10));
	ft_putchar(' ');
	ft_putchar('0' + (j / 10));
	ft_putchar('0' + (j % 10));
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i++ <= 98)
	{
		j = i;
		while (j++ <= 99)
		{
			if (!(i == 1 && j == 2))
				write(1, ", ", 2);
			ft_print_result(i - 1, j - 1);
		}
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
