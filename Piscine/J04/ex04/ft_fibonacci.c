/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/27 01:05:13 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/01 23:31:17 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int		ft_fibonacci(int index)
{
	if (index <= 1)
		return ((index < 0) ? -1 : index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
