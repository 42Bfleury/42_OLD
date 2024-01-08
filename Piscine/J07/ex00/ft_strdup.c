/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 19:54:49 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/07 20:18:07 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int		ft_strlen(char *str)
{
	char	*tmp;

	tmp = str;
	while (*tmp)
		tmp++;
	return (tmp - str);
}

char			*ft_strdup(char *src)
{
	int		i;
	char	*result;

	if (!(result = (char*)malloc(ft_strlen(src) * sizeof(char) + 1)))
		return (NULL);
	i = 0;
	while (src[i++])
		result[i - 1] = src[i - 1];
	result[i - 1] = src[i - 1];
	return (result);
}
