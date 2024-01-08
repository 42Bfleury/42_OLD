/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 15:20:23 by bfleury           #+#    #+#             */
/*   Updated: 2015/09/20 21:06:36 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval_expr.h"

int			ft_count_word(char *str)
{
	int i;
	int nb_words;

	i = 0;
	nb_words = 0;
	while (str[i])
	{
		if (str[i + 1] == '\0')
			nb_words++;
		else if (str[i - 1] != ' ' && str[i] == ' ' && str[i + 1] != ' ')
			nb_words++;
		i++;
	}
	return (nb_words);
}
