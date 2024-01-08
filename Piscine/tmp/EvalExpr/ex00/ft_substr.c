/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 08:29:31 by bfleury           #+#    #+#             */
/*   Updated: 2015/09/20 21:19:46 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval_expr.h"

char		*ft_substr(char *str, int start, int end)
{
	int i;
	char *result;

	i = start;
	result = (char *)malloc(sizeof(char) * (end - start + 1));
	while (i <= end)
	{
		result[i - start] = str[i];
		i++;
	}
	result[i - start] = '\0';
	return (result);
}
