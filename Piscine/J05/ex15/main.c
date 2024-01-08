/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 06:55:27 by bfleury           #+#    #+#             */
/*   Updated: 2016/03/08 08:34:18 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	test(char *dst, char *src, unsigned long size)
{
	char			s1[100];
	char			s2[100];
	char			s3[100];
	char			s4[100];

	strcpy(s1, dst);
	strcpy(s2, src);
	strcpy(s3, dst);
	strcpy(s4, src);
	printf("s1 => %s\ns2 => %s\n", s1, s2);
	printf("ft_strlcat(%s, %s, %lu) => ", s1, s2, size);
	printf("%i\n", ft_strlcat(s1, s2, size));
	printf("s1 => %s\ns2 => %s\n", s1, s2);
	printf("__________________________\n\n");
	printf("s3 => %s\ns4 => %s\n", s3, s4);
	printf("strlcat(%s, %s, %lu) => ", s3, s4, size);
	printf("%lu\n", strlcat(s3, s4, size));
	printf("s3 => %s\ns4 => %s\n", s3, s4);
}

int		main(void)
{
	test("Hello", " World!", 12);
	printf("\n//////////////////////////\n\n");
	test("Hello", " World!", 13);
	printf("\n//////////////////////////\n\n");
	test("Hello", " World!", 14);
	return (0);
}
