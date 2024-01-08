/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 23:54:13 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 17:26:52 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

char	g_str1[2] = "a\0";
char	g_str2[3] = "ab\0";
char	g_str3[4] = "abc\0";
char	g_str4[5] = "abcd\0";
char	g_str5[6] = "abcde\0";
char	g_str6[7] = "abcdef\0";
char	g_str7[8] = "abcdefg\0";
char	g_str8[9] = "abcdefgh\0";
char	g_str9[10] = "abcdefghi\0";

int		main(void)
{
	printf("ft_strrev(%s) => ", g_str1);
	printf("%s\n", ft_strrev(g_str1));
	printf("ft_strrev(%s) => ", g_str2);
	printf("%s\n", ft_strrev(g_str2));
	printf("ft_strrev(%s) => ", g_str3);
	printf("%s\n", ft_strrev(g_str3));
	printf("ft_strrev(%s) => ", g_str4);
	printf("%s\n", ft_strrev(g_str4));
	printf("ft_strrev(%s) => ", g_str5);
	printf("%s\n", ft_strrev(g_str5));
	printf("ft_strrev(%s) => ", g_str6);
	printf("%s\n", ft_strrev(g_str6));
	printf("ft_strrev(%s) => ", g_str7);
	printf("%s\n", ft_strrev(g_str7));
	printf("ft_strrev(%s) => ", g_str8);
	printf("%s\n", ft_strrev(g_str8));
	printf("ft_strrev(%s) => ", g_str9);
	printf("%s\n", ft_strrev(g_str9));
	return (0);
}
