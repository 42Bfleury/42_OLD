/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 05:44:01 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 05:57:13 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	test(char *s1, char *s2)
{
	printf("s1 => %s\ns2 => %s\n\n", s1, s2);
	printf("ft_strstr(s1, s2) => %s\n", ft_strstr(s1, s2));
	printf("strstr(s1, s2)    => %s\n", strstr(s1, s2));
}

int		main(void)
{
	char	*str;

	str = "Hello World!";
	test(str, "Hello World!");
	printf("________________________________________\n\n");
	test(str, "Hello World");
	printf("________________________________________\n\n");
	test(str, "Hello");
	printf("________________________________________\n\n");
	test(str, "World!");
	printf("________________________________________\n\n");
	test(str, "World");
	printf("________________________________________\n\n");
	test(str, "World!!!");
	return (0);
}
