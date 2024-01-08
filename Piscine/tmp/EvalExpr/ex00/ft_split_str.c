/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 09:56:15 by bfleury           #+#    #+#             */
/*   Updated: 2015/09/20 21:27:00 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval_expr.h"

char		**ft_split_str(char *str, char delimiter)
{
	int i;
	int j;
	int k;
	char **result;

	i = 0;
	j = 0;
	k = 0;
	result = ft_init_result_table(ft_count_word(str));
	if (!result)
		return (0);
	while (str[j])
	{
		if (str[j] == delimiter || str[j + 1] == '\0')
		{
			result[k] = ft_substr(str, i, j);
			j++;
			k++;
			i = j;
		}
		else
			j++;
	}
	return (result);
}
