/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 06:55:16 by bfleury           #+#    #+#             */
/*   Updated: 2016/03/08 08:30:18 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int		ft_strlen(char *str)
{
	char	*ptr;

	ptr = str;
	while (*ptr)
		ptr++;
	return (ptr - str);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	srclen;
	unsigned int	destlen;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	size -= destlen;
	dest += destlen;
	if (!size)
		return (destlen + srclen);
	while (*src++)
		if (size-- != 1 || (size++ && 0))
			*dest++ = *(src - 1);
	*dest = '\0';
	return (destlen + srclen);
}
