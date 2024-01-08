/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 02:15:53 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:20:16 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	int		i;
	char	*result;

	if (!s || !(result = ft_strnew(len)))
		return (NULL);
	i = 0;
	while (len--)
		result[i++] = s[start++];
	return (result);
}
