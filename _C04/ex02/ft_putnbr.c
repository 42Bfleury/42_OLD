/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 07:57:24 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/14 08:58:03 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		neg;
	char	c;

	neg = 1;
	if (nb < 0)
	{
		neg = -1;
		write(1, "-", 1);
	}
	if (nb <= -10 || 10 <= nb)
		ft_putnbr(neg * (nb / 10));
	c = '0' + (neg * (nb % 10));
	write(1, &c, 1);
}
/*
int	main(void)
{
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	return (0);
}*/
