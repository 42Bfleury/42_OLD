/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/01 20:12:07 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/01 20:18:08 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	test(int n)
{
	printf("ft_recursive_factorial(%i) => %i\n", n, ft_recursive_factorial(n));
}

int		main(void)
{
	int		n;

	n = -1;
	while (n++ <= 13)
		test(n - 1);
	return (0);
}
