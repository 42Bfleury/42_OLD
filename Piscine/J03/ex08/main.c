/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/01 00:19:15 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/01 00:36:56 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	test(char *str)
{
	printf("\n\n//////////////////////////\n\n\n");
	printf("ft_atoi(%s) => %i\n\n", str, ft_atoi(str));
	printf("atoi(%s) => %i\n", str, atoi(str));
}

void	test1(void)
{
	char	*str;

	str = "0";
	test(str);
	str = "+0";
	test(str);
	str = "-0";
	test(str);
	str = "7";
	test(str);
	str = "07";
	test(str);
	str = "+7";
	test(str);
	str = "+07";
	test(str);
	str = "-7";
	test(str);
}

void	test2(void)
{
	char	*str;

	str = "-07";
	test(str);
	str = "42";
	test(str);
	str = "042";
	test(str);
	str = "+42";
	test(str);
	str = "+042";
	test(str);
	str = "-42";
	test(str);
	str = "-042";
	test(str);
}

int		main(void)
{
	test1();
	test2();
	return (0);
}
