/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 09:06:30 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:20:05 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char		**ft_strsplit(const char *s, char c)
{
	int		i;
	int		nb_word;
	int		wordlen;
	char	**result;

	if (s)
	{
		i = 0;
		nb_word = ft_count_words(s, c);
		if (!(result = (char**)malloc(sizeof(char*) * (nb_word + 1))))
			return (NULL);
		while (nb_word--)
		{
			while (*s && *s == c)
				s++;
			wordlen = ft_wordlen(s, c);
			if (!(result[i++] = ft_strsub(s, 0, wordlen)))
				return (NULL);
			s += wordlen;
		}
		result[i] = NULL;
		return (result);
	}
	return (NULL);
}
