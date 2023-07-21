/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 04:07:48 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/18 01:56:48 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char a[] = "test";
	char b[] = "Test";
	char c[] = "test42";
	printf("%s\n",ft_strupcase(a));
	printf("%s\n",ft_strupcase(b));
	printf("%s\n",ft_strupcase(c));
}*/
