/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 03:59:18 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/20 19:34:55 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size > 0)
	{
		size -= 1;
		while (src[i] && i < size)
		{
			if (i < size)
				dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	while (src[i])
			i++;
	return (i);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	unsigned int	i = 10;
	char			*s1 = "Test 1";
	char			*s2 = "Test 2";
	char			d1[] = "abcdefghijklmnopqrstuvwxyz";
	char			d2[] = "abcdefghijklmnopqrstuvwxyz";

	printf("Test strlcpy:\nSource: %s\nDest(B): %s\n",s1,d1);
	printf("Size: %u\nReturn: %li\nDest(A): %s\n\n",i,strlcpy(d1,s1,i),d1);
	printf("Test ft_strlcpy:\nSource: %s\nDest(B): %s\n",s2,d2);
	printf("Size: %u\nReturn: %u\nDest(A): %s\n",i,ft_strlcpy(d2,s2,i),d2);
}*/
