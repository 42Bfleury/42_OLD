/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 09:19:46 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/17 15:05:01 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	neg;
	int	result;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg *= -1;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (neg * result);
}
/*
#include <stdio.h>
int	main(void)
{
	char *nb;

	nb = "42";
	printf("%s = %i\n", nb, ft_atoi(nb));
	nb = "0";
	printf("%s = %i\n", nb, ft_atoi(nb));
	nb = "-42";
	printf("%s = %i\n", nb, ft_atoi(nb));
	nb = "---+--+1234ab567";
	printf("%s = %i\n", nb, ft_atoi(nb));
	nb = "---+--+1234567-+";
	printf("%s = %i\n", nb, ft_atoi(nb));
	return (0);
}*/
