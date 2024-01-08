/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/24 01:50:44 by bfleury           #+#    #+#             */
/*   Updated: 2015/09/24 19:34:31 by qsalerne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../H/bsq.h"

int		ft_strlen(char *str)
{
	char	*cp;

	cp = str;
	while (*cp)
		cp++;
	return (cp - str);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

char	ft_puterror(void)
{
	write(2, "map error\n", 10);
	return (0);
}

int		ft_atoi(char *str)
{
	int		number;
	int		i;

	number = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number += ((int)str[i] - '0');
		i++;
	}
	if (str[i] != '\0')
		return (0);
	return (number);
}
