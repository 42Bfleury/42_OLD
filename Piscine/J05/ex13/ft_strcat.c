/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 05:14:18 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 16:46:59 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int	ft_strlen(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr++)
		;
	return (ptr - str);
}

char		*ft_strcat(char *dest, char *src)
{
	int		i;
	int		dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i++])
		dest[dest_len + i - 2] = src[i - 1];
	dest[dest_len + i - 2] = '\0';
	return (dest);
}
