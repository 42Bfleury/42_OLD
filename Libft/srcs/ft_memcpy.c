/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 02:28:35 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:18:31 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*ptrdst;
	char	*ptrsrc;

	if (n && dst != src)
	{
		ptrdst = dst;
		ptrsrc = (char*)src;
		while (n--)
			*ptrdst++ = *ptrsrc++;
	}
	return (dst);
}
