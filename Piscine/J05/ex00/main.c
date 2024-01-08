/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 05:37:49 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 17:49:43 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(void)
{
	char	s1[20];
	char	s2[20];
	char	s3[20];

	strcpy(s1, "Hello World!");
	strcpy(s2, "Holla!");
	strcpy(s3, "Allo!");
	printf("s1 => %s\ns2 => %s\n\n", s1, s2);
	printf("ft_strcpy(s2, s1) => %s\n\n", ft_strcpy(s2, s1));
	printf("s1 => %s\ns2 => %s\n", s1, s2);
	printf("\n\n////////////////////////////////////////\n\n\n");
	printf("s1 => %s\ns3 => %s\n\n", s1, s3);
	printf("strcpy(s3, s1)    => %s\n\n", strcpy(s3, s1));
	printf("s1 => %s\ns3 => %s\n", s1, s3);
	return (0);
}
