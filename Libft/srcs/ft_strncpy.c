/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 08:24:19 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:19:53 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		i;

	if (n && dst != src)
	{
		i = 0;
		while (*src && i < n)
			dst[i++] = *src++;
		while (i < n)
			dst[i++] = 0;
	}
	return (dst);
}
