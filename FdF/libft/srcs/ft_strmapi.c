/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 12:30:32 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:19:43 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*result;

	i = 0;
	if (!s || !f || !(result = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[i++])
		result[i - 1] = f(i - 1, s[i - 1]);
	return (result);
}
