/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 05:31:57 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 16:46:12 by Bfleury          ###   ########.fr       */
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

char		*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	int		dest_len;

	i = 0;
	dest_len = ft_strlen(dest);
	while (i <= nb && src[i++])
		dest[dest_len + i - 2] = src[i - 1];
	dest[dest_len + i - 2] = '\0';
	return (dest);
}
