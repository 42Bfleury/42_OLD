/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 08:37:53 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:18:28 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char		*c1;
	unsigned char		*c2;

	if (n && s1 != s2)
	{
		c1 = (unsigned char*)s1;
		c2 = (unsigned char*)s2;
		while (n--)
		{
			if (*c1 != *c2)
				return (*c1 - *c2);
			c1++;
			c2++;
		}
	}
	return (0);
}
