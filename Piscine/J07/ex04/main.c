/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 03:57:49 by bfleury           #+#    #+#             */
/*   Updated: 2016/03/08 05:50:32 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

void	test(char *str)
{
	char	**result;

	printf("ft_split_whitespaces(%s) =>\n", str);
	result = ft_split_whitespaces(str);
	while (*result++)
	{
		while (*(*(result - 1))++)
			ft_putchar(*(*(result - 1) - 1));
		ft_putchar('\n');
	}
}

int		main(void)
{
	test("");
	printf("//////////////////////////\n\n");
	test("C'est");
	printf("//////////////////////////\n\n");
	test("C'est     ");
	printf("//////////////////////////\n\n");
	test("     C'est");
	printf("//////////////////////////\n\n");
	test("C'est qui le patron ?");
	printf("//////////////////////////\n\n");
	test("C'est qui   le    patron     ?");
	printf("//////////////////////////\n\n");
	test("     C'est qui   le    patron     ?");
	printf("//////////////////////////\n\n");
	test("C'est qui   le    patron     ?     ");
	printf("//////////////////////////\n\n");
	test("     C'est qui   le    patron     ?     ");
	return (0);
}
