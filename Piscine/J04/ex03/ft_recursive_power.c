/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 17:58:26 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/01 23:07:16 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_recursive_power(int nb, int power)
{
	if (power <= 1)
		return ((power) ? nb : 0);
	return (nb * ft_recursive_power(nb, power - 1));
}
