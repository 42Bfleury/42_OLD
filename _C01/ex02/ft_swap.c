/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 05:22:39 by bfleury           #+#    #+#             */
/*   Updated: 2023/07/07 06:19:13 by bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*
#include <stdio.h>

int main(void)
{
	int a;
	int b;

	a = 0;
	b = 42;
	printf("a: %i\nb: %i\n", a, b);
	ft_swap(&a, &b);
	printf("a: %i\nb: %i\n", a, b);
}*/
