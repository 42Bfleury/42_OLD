/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 03:10:48 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:18:25 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*ptrdst;
	char	*ptrsrc;

	if (n && dst != src)
	{
		ptrdst = dst;
		ptrsrc = (char*)src;
		while (n--)
			if ((*ptrdst++ = *ptrsrc++) == c)
				return (ptrdst);
	}
	return (NULL);
}
