/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 10:09:04 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 08:21:27 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	test(int n)
{
	char	s1[20];
	char	s2[20];
	char	s3[20];
	char	s4[20];

	strcpy(s1, "Hello ");
	strcpy(s2, "World!");
	strcpy(s3, "Hello ");
	strcpy(s4, "World!");
	printf("s1 => %s\ns2 => %s\n\n", s1, s2);
	printf("ft_strncat(s1, s2, %i) => %s\n\n", n, ft_strncat(s1, s2, n));
	printf("s1 => %s\ns2 => %s\n", s1, s2);
	printf("________________________________________\n\n");
	printf("s3 => %s\ns4 => %s\n\n", s3, s4);
	printf("strncat(s3, s4, %i) => %s\n\n", n, strncat(s3, s4, n));
	printf("s3 => %s\ns4 => %s\n", s3, s4);
}

int		main(void)
{
	test(3);
	printf("\n\n////////////////////////////////////////\n\n\n");
	test(20);
	return (0);
}
