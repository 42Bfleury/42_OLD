/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 03:38:22 by bfleury           #+#    #+#             */
/*   Updated: 2016/11/11 12:20:17 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	end;

	if (!s)
		return (NULL);
	if (!*s)
		return (ft_strnew(0));
	start = 0;
	end = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	while (end > start && (s[end] == ' ' || s[end] == '\n' || s[end] == '\t'))
		end--;
	return (ft_strsub(s, start, end - start + 1));
}
