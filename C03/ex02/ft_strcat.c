/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:11:18 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/20 17:40:38 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		j;

	if (dest != src)
	{
		i = 0;
		j = 0;
		while (dest[i])
			i++;
		while (src[j])
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
	char	*src;
	char	dest[100] = "Ceci est ";

	src = "un test.";
	printf("strcat:\n");
	printf("src: %s | dest: %s | return: ",src,dest);
	printf("%s\n",strcat(dest,src));
	dest[9] = 0;
	printf("ft_strcat:\n");
	printf("src: %s | dest: %s | return: ",src,dest);
	printf("%s\n",ft_strcat(dest,src));
	src = "";
	dest[9] = 0;
	printf("\nstrcat:\n");
	printf("src: %s | dest: %s | return: ",src,dest);
	printf("%s\n",strcat(dest,src));
	dest[9] = 0;
	printf("ft_strcat:\n");
	printf("src: %s | dest: %s | return: ",src,dest);
	printf("%s\n",ft_strcat(dest,src));
	src = "un test.";
	dest[0] = 0;
	printf("\nstrcat:\n");
	printf("src: %s | dest: %s | return: ",src,dest);
	printf("%s\n",strcat(dest,src));
	dest[0] = 0;
	printf("ft_strcat:\n");
	printf("src: %s | dest: %s | return: ",src,dest);
	printf("%s\n",ft_strcat(dest,src));
	src = "";
	dest[0] = 0;
	printf("\nstrcat:\n");
	printf("src: %s | dest: %s | return: ",src,dest);
	printf("%s\n",strcat(dest,src));
	dest[0] = 0;
	printf("ft_strcat:\n");
	printf("src: %s | dest: %s | return: ",src,dest);
	printf("%s\n",ft_strcat(dest,src));
	return (0);
}*/
