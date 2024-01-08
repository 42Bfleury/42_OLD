/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_result_table.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 19:45:00 by bfleury           #+#    #+#             */
/*   Updated: 2015/09/20 23:41:44 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval_expr.h"

char		**ft_init_result_table(int size)
{
	int i;
	char **result;

	i = 0;
	result = (char **)malloc(sizeof(char *) * size);
	if (!result)
		return (0);
	while (i < size)
	{
		result[i] = (char *)malloc(sizeof(char) * 12);
		if (!result)
			return (0);
		i++;
	}
	return (result);
}
