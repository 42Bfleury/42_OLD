/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 09:55:25 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 08:12:00 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(void)
{
	char	s1[20];
	char	s2[20];
	char	s3[20];
	char	s4[20];

	strcpy(s1, "Hello ");
	strcpy(s3, "Hello ");
	strcpy(s2, "World!");
	strcpy(s4, "World!");
	printf("s1 => %s\ns2 => %s\n\n", s1, s2);
	printf("ft_strcat(s1, s2) => %s\n\n", ft_strcat(s1, s2));
	printf("s1 => %s\ns2 => %s\n", s1, s2);
	printf("________________________________________\n\n");
	printf("s1 => %s\ns2=> %s\n\n", s3, s4);
	printf("strcat(s1, s2) => %s\n\n", strcat(s3, s4));
	printf("s1 => %s\ns2 => %s\n", s3, s4);
	return (0);
}
