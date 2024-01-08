/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_operation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 09:19:24 by bfleury           #+#    #+#             */
/*   Updated: 2015/09/20 23:40:53 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval_expr.h"

char		**ft_get_operation(char **str)
{
	int i;
	int j;
	char *operator;
	char **operation;

	i = 0;
	operator = "*/%+-";
	operation = ft_init_result_table(3);
	if (!operation)
		return (0);
	while (operator[i])
	{
		j = 0;
		while (str[j])
		{
			if (operator[i] == str[j][0])
			{
				operation[0] = str[j - 1];
				operation[1] = str[j];
				operation[2] = str[j + 1];
				return (operation);
			}
			else
				j++;
		}
		i++;
	}
	return (operation);
}
