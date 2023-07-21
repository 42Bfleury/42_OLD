/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 03:49:17 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/20 21:57:57 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	j = 0;
	if (!to_find[j])
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] == to_find[j])
			j++;
		if (!(to_find[j]))
			return (str + i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*str;
	char	*to_find;

	str = "Ceci est un test!";
	to_find = "un";
	printf("strstr :\nstr: %s | to_find: %s",str,to_find);
	printf(" | return: %s\n",strstr(str,to_find));
	printf("ft_strstr :\nstr: %s | to_find: %s",str,to_find);
	printf(" | return: %s\n",ft_strstr(str,to_find));
	str = "Ceci est un test!";
	to_find = "";
	printf("\nstrstr :\nstr: %s | to_find: %s",str,to_find);
	printf(" | return: %s\n",strstr(str,to_find));
	printf("ft_strstr :\nstr: %s | to_find: %s",str,to_find);
	printf(" | return: %s\n",ft_strstr(str,to_find));
	str = "";
	to_find = "un";
	printf("\nstrstr :\nstr: %s | to_find: %s",str,to_find);
	printf(" | return: %s\n",strstr(str,to_find));
	printf("ft_strstr :\nstr: %s | to_find: %s",str,to_find);
	printf(" | return: %s\n",ft_strstr(str,to_find));
	str = "";
	to_find = "";
	printf("\nstrstr :\nstr: %s | to_find: %s",str,to_find);
	printf(" | return: %s\n",strstr(str,to_find));
	printf("ft_strstr :\nstr: %s | to_find: %s",str,to_find);
	printf(" | return: %s\n",ft_strstr(str,to_find));
	return (0);
}*/
