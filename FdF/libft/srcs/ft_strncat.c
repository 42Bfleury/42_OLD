/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 16:53:43 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:19:45 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t		i;

	if (n && dst != src)
	{
		i = 0;
		while (dst[i])
			i++;
		while (n-- && *src)
			dst[i++] = *src++;
		dst[i] = 0;
	}
	return (dst);
}
