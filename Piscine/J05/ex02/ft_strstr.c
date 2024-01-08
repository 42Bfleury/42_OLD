/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 02:32:05 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 06:07:43 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	while (str[i++] && ((j = 0) || 1))
	{
		if (str[i - 1] == to_find[j])
			while (to_find[j] && str[i + j - 1] && str[i + j - 1] == to_find[j])
				j++;
		if (j && !to_find[j])
			return (str + i - 1);
	}
	return (NULL);
}
