/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 17:34:14 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/01 22:33:38 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_iterative_power(int nb, int power)
{
	int		result;

	result = nb;
	if (power <= 1)
		return ((power == 1) ? result : 0);
	while (--power)
		result *= nb;
	return (result);
}
