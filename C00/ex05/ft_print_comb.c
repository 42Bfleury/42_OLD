/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <benjamin.fleury@hotmail.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 19:17:55 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/07 02:57:08 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_result(char a, char b, char c)
{
	if (!(a == '0' && b == '1' && c == '2'))
		write(1, ", ", 2);
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	i;
	char	j;
	char	k;

	i = '0';
	while (i++ <= '7')
	{
		j = i;
		while (j++ <= '8')
		{
			k = j;
			while (k++ <= '9')
				ft_print_result(i - 1, j - 1, k - 1);
		}
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
