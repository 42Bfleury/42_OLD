/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/29 19:09:39 by Bfleury           #+#    #+#             */
/*   Updated: 2016/02/29 21:11:05 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	test(int a, int b, int *div, int *mod)
{
	printf("\n///////////////////////////////////////////////////////////\n\n");
	printf("a = %i   b = %i   div = %i   mod = %i\n\n", a, b, *div, *mod);
	if (b)
		ft_div_mod(a, b, div, mod);
	printf("a / b = div   =>   %i / %i = ", a, b);
	printf(((b) ? "%i\n" : "IMPOSSIBLE\n"), *div);
	printf("a %% b = mod   =>   %i %% %i = ", a, b);
	printf(((b) ? "%i\n" : "IMPOSSIBLE\n"), *mod);
	*div = 0;
	*mod = 0;
}

int		main(void)
{
	int		div;
	int		mod;

	div = 0;
	mod = 0;
	test(15, 2, &div, &mod);
	test(-15, 2, &div, &mod);
	test(15, -2, &div, &mod);
	test(-15, -2, &div, &mod);
	test(4, 10, &div, &mod);
	test(-4, 10, &div, &mod);
	test(4, -10, &div, &mod);
	test(-4, -10, &div, &mod);
	test(0, 7, &div, &mod);
	test(-0, 7, &div, &mod);
	test(0, -7, &div, &mod);
	test(-0, -7, &div, &mod);
	test(7, 0, &div, &mod);
	test(-7, 0, &div, &mod);
	test(7, -0, &div, &mod);
	test(-7, -0, &div, &mod);
	return (0);
}
