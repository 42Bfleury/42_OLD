/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 06:20:34 by bfleury           #+#    #+#             */
/*   Updated: 2015/09/20 21:45:04 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval_expr.h"

int		ft_atoi(char *str)
{
	int		i;
	int		minus;
	int		number;

	i = 0;
	minus = 0;
	number = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') ||
			(str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-')
		minus = 1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number += ((int)str[i] - 48);
		i++;
	}
	if (minus)
		number = -number;
	return (number);
}
