/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_parenthesis.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 09:05:13 by bfleury           #+#    #+#             */
/*   Updated: 2015/09/20 23:41:20 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval_expr.h"

char		*ft_get_parenthesis(char *str)
{
	int open;
	int close;

	open = ft_find_last_occurence(str, '(');
	close = ft_find_next_occurence(str, ')', open);
	if (open >= 0 && close >= 0)
		return (ft_substr(str, open + 1, close - 1));
	else
		return (str);
}
