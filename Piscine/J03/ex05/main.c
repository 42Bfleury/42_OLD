/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 23:25:05 by Bfleury           #+#    #+#             */
/*   Updated: 2016/02/29 23:42:09 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		main(void)
{
	char *str;

	str = "Hello World!";
	printf("ft_strlen(%s) => %i\n\n", str, ft_strlen(str));
	printf("strlen(%s) => %lu\n", str, strlen(str));
	printf("\n\n//////////////////////////\n\n\n");
	str = "Hello World!\0 abc";
	printf("ft_strlen(Hello World!\\0 abc) => %i\n\n", ft_strlen(str));
	printf("strlen(Hello World!\\0 abc) => %lu\n", strlen(str));
	return (0);
}
