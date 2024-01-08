/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 08:28:01 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 06:47:07 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	test(char *s1, char *s2, int n)
{
	printf("s1 => %s\ns2 => %s\n\n", s1, s2);
	printf("ft_strncmp(s1, s2, %i) => %i\n", n, ft_strncmp(s1, s2, n));
	printf("strncmp(s1, s2, %i)    => %i\n", n, strncmp(s1, s2, n));
}

int		main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Hello World";
	s2 = "Hello World";
	test(s1, s2, 20);
	printf("________________________________________\n\n");
	s1 = "Hello World.";
	s2 = "Hello World";
	test(s1, s2, 20);
	printf("________________________________________\n\n");
	s1 = "Hello World";
	s2 = "Hello World.";
	test(s1, s2, 20);
	printf("________________________________________\n\n");
	s1 = "Hello World";
	s2 = "hello world";
	test(s1, s2, 20);
	printf("________________________________________\n\n");
	s1 = "hello world";
	s2 = "Hello World";
	test(s1, s2, 20);
	return (0);
}
