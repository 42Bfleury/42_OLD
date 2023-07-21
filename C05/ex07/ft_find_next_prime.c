/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 21:43:20 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/20 21:45:26 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (!ft_is_prime(nb))
		while (ft_is_prime(nb) == 0)
			nb++;
	return (nb);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%i\n", ft_find_next_prime(10));
	return (0);
}*/
