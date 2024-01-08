/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_occurence.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 08:23:58 by bfleury           #+#    #+#             */
/*   Updated: 2015/09/20 23:42:21 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval_expr.h"

int			ft_find_last_occurence(char *str, char c, int pos)
{
	int i;

	i = pos;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int			ft_find_next_occurence(char *str, char c)
{
	int i;
	int index;

	i = 0;
	index = -1;
	while (str[i])
	{
		if (str[i] == c)
			index = i;
		i++;
	}
	return (index);
}
