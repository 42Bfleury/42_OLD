/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 20:27:34 by Bfleury           #+#    #+#             */
/*   Updated: 2016/02/29 21:04:21 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	test(int *a, int *b)
{
	int		a1;
	int		b1;

	a1 = *a;
	b1 = *b;
	printf("\n///////////////////////////////////////////////////////////\n\n");
	printf("a = %i   b = %i\n\n", a1, b1);
	if (b1)
		ft_ultimate_div_mod(a, b);
	printf("a / b = div   =>   %i / %i = ", a1, b1);
	printf(((b1) ? "%i\n" : "IMPOSSIBLE\n"), *a);
	printf("a %% b = mod   =>   %i %% %i = ", a1, b1);
	printf(((b1) ? "%i\n" : "IMPOSSIBLE\n"), *b);
}

void	test1(void)
{
	int a;
	int b;

	a = 15;
	b = 2;
	test(&a, &b);
	a = -15;
	b = 2;
	test(&a, &b);
	a = 15;
	b = -2;
	test(&a, &b);
	a = -15;
	b = -2;
	test(&a, &b);
	a = 4;
	b = 10;
	test(&a, &b);
	a = -4;
	b = 10;
	test(&a, &b);
	a = 4;
	b = 10;
	test(&a, &b);
}

void	test2(void)
{
	int a;
	int b;

	a = -4;
	b = -10;
	test(&a, &b);
	a = 0;
	b = 7;
	test(&a, &b);
	a = -0;
	b = 7;
	test(&a, &b);
	a = -7;
	b = 0;
	test(&a, &b);
	a = -0;
	b = -7;
	test(&a, &b);
	a = 7;
	b = 0;
	test(&a, &b);
	a = -7;
	b = 0;
	test(&a, &b);
}

void	test3(void)
{
	int a;
	int b;

	a = 7;
	b = -0;
	test(&a, &b);
	a = -7;
	b = -0;
	test(&a, &b);
}

int		main(void)
{
	test1();
	test2();
	test3();
	return (0);
}
