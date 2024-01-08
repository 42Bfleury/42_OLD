/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/20 23:02:19 by bfleury           #+#    #+#             */
/*   Updated: 2015/09/20 23:18:17 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_eval_expr.h"

char		*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int			main(void)
{
	char *str1;
	char *str2;
	char *result;

	str1 = "Ceci est un ";
	str2 = "test.";
	result = (char *)malloc(sizeof(char) * 1024);
	if(!result)
		return (0);
	result = ft_strcat(str1, str2);
	printf("%s\n", result);
	return (0);
}
