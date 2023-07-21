/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 07:57:24 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/17 15:53:08 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == '+' || base[i] == '-' || base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	if (i < 2)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		b;
	int		neg;

	neg = 1;
	b = ft_check_base(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		neg = -1;
	}
	if (nbr <= -b || b <= nbr)
		ft_putnbr_base(neg * (nbr / b), base);
	write(1, &base[neg * (nbr % b)], 1);
}
/*
#include <stdio.h>
int	main(void)
{
	ft_putnbr_base(-42, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(0, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(15, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(16, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(31, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(32, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789abcdef");
	write(1, "\n", 1);
	return (0);
}*/
