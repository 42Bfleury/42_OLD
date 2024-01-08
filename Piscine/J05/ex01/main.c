/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 05:41:17 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 05:34:22 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	test(int n)
{
	char	s1[12];
	char	s2[6];
	char	s3[6];

	strcpy(s1, "Hello World!");
	strcpy(s2, "Salut!");
	strcpy(s3, "Salut!");
	printf("s1 => %s\ns2 => %s\ns3 => %s\n\n", s1, s2, s3);
	printf("ft_strncpy(s2, s1, %i) => %s\n\n", n, ft_strncpy(s2, s1, n));
	printf("s1 => %s\ns2 => %s\ns3 => %s\n", s1, s2, s3);
	printf("____________________________________________\n\n");
	printf("s1 => %s\ns2 => %s\ns3 => %s\n\n", s1, s2, s3);
	printf("strncpy(s3, s1, %i) => %s\n\n", n, strncpy(s3, s1, n));
	printf("s1 => %s\ns2 => %s\ns3 => %s\n", s1, s2, s3);
}

int		main(void)
{
	test(5);
	printf("\n\n////////////////////////////////////////\n\n\n");
	test(20);
	return (0);
}
