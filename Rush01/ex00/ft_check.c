/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 21:14:44 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/09 23:29:25 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_check_arg(char *arg)
{
	int	i;

	i = 0;
	if (ft_strlen(arg) != 31)
		return (0);
	while (arg[i])
	{
		if (!(i % 2) && !ft_is_num(arg[i]))
			return (0);
		if ((i % 2) && arg[i] != ' ')
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_map(char *param, int size)
{
	int	i;
	int	j;
	int	p;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < size)
		{
			p = param[j] + param[j + ((i + 1) * size)];
			if (!(3 <= p && p <= size + 1))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
