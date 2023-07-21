/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 05:47:47 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/07 06:19:04 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	ft_div_mod(20, 12, &a, &b);
	printf("20/12=%i\n20%%12=%i\n", a, b);
	return (0);
}*/
