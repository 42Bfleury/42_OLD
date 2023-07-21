/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 02:04:12 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/20 19:27:29 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int		i;
	int		j;

	if (nb && dest != src)
	{
		i = 0;
		j = 0;
		while (dest[i])
			i++;
		while (src[j] && nb--)
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = 0;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	int		size;
	char	*src;
	char	dest[100] = "Ceci est ";

	size = 8;
	src = "un test.!";
	printf("strncat:\n");
	printf("src: %s | dest: %s | size: %i | return: ",src,dest,size);
	printf("%s\n",strncat(dest,src,size));
	dest[9] = 0;
	printf("ft_strncat:\n");
	printf("src: %s | dest: %s | size: %i | return: ",src,dest,size);
	printf("%s\n",ft_strncat(dest,src,size));

	src = "";
	dest[9] = 0;
	printf("\nstrncat:\n");
	printf("src: %s | dest: %s | size: %i | return: ",src,dest,size);
	printf("%s\n",strncat(dest,src,size));
	dest[9] = 0;
	printf("ft_strncat:\n");
	printf("src: %s | dest: %s | size: %i | return: ",src,dest,size);
	printf("%s\n",ft_strncat(dest,src,size));

	src = "un test.!";
	dest[0] = 0;
	printf("\nstrncat:\n");
	printf("src: %s | dest: %s | size: %i | return: ",src,dest,size);
	printf("%s\n",strncat(dest,src,size));
	dest[0] = 0;
	printf("ft_strncat:\n");
	printf("src: %s | dest: %s | size: %i | return: ",src,dest,size);
	printf("%s\n",ft_strncat(dest,src,size));

	src = "";
	dest[0] = 0;
	printf("\nstrncat:\n");
	printf("src: %s | dest: %s | size: %i | return: ",src,dest,size);
	printf("%s\n",strncat(dest,src,size));
	dest[0] = 0;
	printf("ft_strncat:\n");
	printf("src: %s | dest: %s | size: %i | return: ",src,dest,size);
	printf("%s\n",ft_strncat(dest,src,size));
	return (0);
}*/
