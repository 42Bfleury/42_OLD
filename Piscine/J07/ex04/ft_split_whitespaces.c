/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 03:57:17 by bfleury           #+#    #+#             */
/*   Updated: 2016/03/08 05:37:04 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int		ft_wordlen(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr != ' ' && *ptr != '\t' && *ptr != '\n' && *ptr != '\0')
		ptr++;
	return (ptr - str);
}

static int		ft_nbword(char *str)
{
	int		i;
	int		result;

	i = 0;
	result = 0;
	while (str[i++])
		if ((str[i - 1] != ' ' && str[i - 1] != '\t' && str[i - 1] != '\n'
			&& str[i - 1] != '\0')
		&& ((str[i - 2] == ' ' || str[i - 2] == '\t' || str[i - 2] == '\n')
			|| i == 1))
			result++;
	return (result);
}

static char		*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i++ < n && src[i - 1])
		dest[i - 1] = src[i - 1];
	while (i++ < n)
		dest[i - 2] = '\0';
	return (dest);
}

char			**ft_split_whitespaces(char *str)
{
	int		i;
	char	*tmp;
	char	**result;

	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	if (!(result = (char**)malloc((sizeof(char*) * ft_nbword(str)) + 1)))
		return (NULL);
	i = 0;
	while (ft_nbword(str))
	{
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
		if (!(tmp = (char*)malloc(sizeof(char) * ft_wordlen(str) + 1)))
			return (NULL);
		ft_strncpy(tmp, str, ft_wordlen(str));
		tmp[ft_wordlen(str)] = '\0';
		result[i++] = tmp;
		str += ft_wordlen(str);
	}
	result[i] = 0;
	return (result);
}
