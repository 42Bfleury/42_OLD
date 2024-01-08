/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/26 16:20:58 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/01 20:30:55 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_recursive_factorial(int nb)
{
	if (nb <= 0 || nb > 12)
		return ((!nb) ? 1 : 0);
	return (nb * ft_recursive_factorial(nb - 1));
}
