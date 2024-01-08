/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/25 02:15:56 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 17:22:58 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int	ft_strlen(char *str)
{
	char *tmp;

	tmp = str;
	while (*tmp)
		tmp++;
	return (tmp - str);
}

char		*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = ft_strlen(str);
	while (--j > i)
	{
		tmp = str[i];
		str[i++] = str[j];
		str[j] = tmp;
	}
	return (str);
}
