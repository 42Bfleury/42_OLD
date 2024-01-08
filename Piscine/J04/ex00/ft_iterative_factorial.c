/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 16:20:58 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/02 04:01:34 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	while (0 < nb && nb < 13)
		result *= nb--;
	return ((nb >= 0 && nb < 13) ? result : 0);
}
