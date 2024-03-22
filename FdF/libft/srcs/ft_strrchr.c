/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 17:53:18 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:20:07 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*ptr;

	ptr = (unsigned char*)s + ft_strlen(s);
	while (ptr >= (unsigned char*)s)
	{
		if (*ptr == c)
			return ((char*)ptr);
		ptr--;
	}
	return (NULL);
}
