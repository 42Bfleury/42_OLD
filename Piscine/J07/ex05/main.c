/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 03:57:49 by bfleury           #+#    #+#             */
/*   Updated: 2016/03/08 05:59:12 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

void	test(char *str)
{
	printf("ft_split_whitespaces(%s) =>\n", str);
	ft_print_words_tables(ft_split_whitespaces(str));
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
