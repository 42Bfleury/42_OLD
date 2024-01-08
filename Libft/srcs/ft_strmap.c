/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 12:10:03 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:19:42 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*result;

	i = 0;
	if (!s || !f || !(result = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i++])
		result[i - 1] = f(s[i - 1]);
	return (result);
}
