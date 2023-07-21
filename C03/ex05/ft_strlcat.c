/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 04:11:34 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/20 22:00:08 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (size && dest != src)
	{
		while (dest[i])
			i++;
		if (i >= size)
			return (i + size);
		while (src[j] && j < (size - 1))
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = 0;
	}
	while (src[j])
		j++;
	return (i + j);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	int		size;
	int		result;
	char	*src;
	char	dest[100];

	size = 3;
	src = "Ceci est un test!";

	dest[0] = 0;
	printf("strlcat :\ndest: %s | src :%s | size: %i\n",dest,src,size);
	result = strlcat(dest,src,size);
	printf("result :\ndest: %s | src: %s | return: %i\n",dest,src,result);

	dest[0] = 0;
	printf("ft_strlcat :\ndest: %s | src :%s | size: %i\n",dest,src,size);
	result = ft_strlcat(dest,src,size);
	printf("result :\ndest: %s | src: %s | return: %i\n",dest,src,result);

	size = 30;
	src = "Ceci est un test!";

	dest[0] = 0;
	printf("\nstrlcat :\ndest: %s | src :%s | size: %i\n",dest,src,size);
	result = strlcat(dest,src,size);
	printf("result :\ndest: %s | src: %s | return: %i\n",dest,src,result);

	dest[0] = 0;
	printf("ft_strlcat :\ndest: %s | src :%s | size: %i\n",dest,src,size);
	result = ft_strlcat(dest,src,size);
	printf("result :\ndest: %s | src: %s | return: %i\n",dest,src,result);

	size = 3;
	src = "Ceci est un test!";

	printf("\nstrlcat :\ndest: %s | src :%s | size: %i\n",dest,src,size);
	result = strlcat(dest,src,size);
	printf("result :\ndest: %s | src: %s | return: %i\n",dest,src,result);

	printf("ft_strlcat :\ndest: %s | src :%s | size: %i\n",dest,src,size);
	result = ft_strlcat(dest,src,size);
	printf("result :\ndest: %s | src: %s | return: %i\n",dest,src,result);
	return (0);
}*/
