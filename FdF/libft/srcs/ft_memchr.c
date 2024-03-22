/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 06:22:12 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:18:26 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*ptr;

	if (n)
	{
		ptr = (unsigned char*)s;
		while (n--)
		{
			if (*ptr == (unsigned char)c)
				return ((void*)ptr);
			ptr++;
		}
	}
	return (NULL);
}
