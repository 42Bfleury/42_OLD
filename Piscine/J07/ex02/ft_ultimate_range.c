/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Bfleury <bfleury@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 20:39:30 by Bfleury           #+#    #+#             */
/*   Updated: 2016/03/07 21:05:51 by Bfleury          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static int		ft_abs(int n)
{
	return ((n < 0) ? -n : n);
}

int				ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*result;

	if (min >= max || !(result = (int*)malloc(sizeof(int) * ft_abs(max - min))))
		return (0);
	i = 0;
	while (i++ < ft_abs(max - min))
		result[i - 1] = (min + i - 1);
	*range = result;
	return (ft_abs(max - min));
}
