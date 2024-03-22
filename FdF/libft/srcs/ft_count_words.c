/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 19:20:28 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:17:08 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_count_words(const char *s, char c)
{
	int		word;
	int		result;

	word = 0;
	result = 0;
	while (*s)
	{
		if (!word && *s != c)
		{
			word = 1;
			result++;
		}
		else if (word && *s == c)
			word = 0;
		s++;
	}
	return (result);
}
